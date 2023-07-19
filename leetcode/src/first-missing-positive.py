class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        N = len(nums)
        
        for i in range(N):
            n = nums[i]
            while n is not None and n > 0 and n <= N and nums[n-1] != n:
                temp = nums[n-1] 
                nums[n-1]  = n
                n = temp
        
        prev = 0
        for num in nums:
            if num != prev+1:
                return prev+1
            prev += 1
        
        return prev+1
            