class Solution:
    def search(self, nums: List[int], target: int) -> int:

        lo = 0
        hi = len(nums)-1


        while (lo <= hi):
            mid = (lo + hi)//2
            if (nums[mid] == target):
                return mid
            if (nums[lo] <= nums[mid]): #pivoted is not in lo and mid
                if (nums[lo] <= target and target <= nums[mid]):
                    hi = mid - 1
                else:
                    lo = mid + 1
                continue
            else: #pivot is not in mid and hi
                if (nums[mid] <= target and target <= nums[hi]):
                    lo = mid + 1
                else:
                    hi = mid - 1
                continue
        
        return -1


