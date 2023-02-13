class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix, suffix = 1, 1
        result = [1]*len(nums)
        for i in range(len(nums)):
            result[i] *= prefix
            result[-i-1] *= suffix
            prefix *= nums[i]
            suffix *= nums[-i-1]
        return result