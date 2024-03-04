# https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            nums2, nums1 = nums1, nums2
        
        N1 = len(nums1)
        N2 = len(nums2)
        total = N1 + N2
        half = total // 2
        
        lo = -1
        hi = len(nums1) - 1
        while lo <= hi:
            mid1 = (lo + hi)//2
            mid2 = half - mid1 - 2

            print(lo, hi, mid1)
            left1 = nums1[mid1] if mid1 >= 0 else float('-infinity')
            right1 = nums1[mid1+1] if mid1 < len(nums1)-1 else float('infinity')
            left2 = nums2[mid2] if mid2 >= 0 else float('-infinity')
            right2 = nums2[mid2+1] if mid2 < len(nums2)-1 else float('infinity')

            if left2 <= right1 and left1 <= right2:
                if total%2 == 1:
                    return min(right1, right2)
                else:
                    return (max(left1, left2) + min(right1, right2))/2
            elif left1 > right2:
                hi = mid1 - 1
            else:
                lo = mid1 + 1