class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        import itertools
        import operator

        s = sum(nums)
        return int(len(nums)*(len(nums)+1)/2-s)