"""
    Method 1: two pointers    
"""
class Solution:

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []

        nums.sort()
        for i in range(len(nums)-2):

            if (i != 0 and nums[i-1] == nums[i] and i < len(nums)-2):
                continue
            
            j = i+1
            k = len(nums)-1
            while (j < k):
                
                s = nums[i]+nums[j]+nums[k]
                if (s < 0):
                    j += 1
                    while nums[j-1] == nums[j] and j < k:
                        j += 1
                elif (s > 0):
                    k -= 1
                    while nums[k+1] == nums[k] and j < k:
                        k -= 1
                else:
                    result.append([nums[i],nums[j],nums[k]])
                    j += 1
                    while nums[j-1] == nums[j] and j < k:
                        j += 1
                    k -= 1
                    while nums[k+1] == nums[k] and j < k:
                        k -= 1
        return [list(i) for i in result]


