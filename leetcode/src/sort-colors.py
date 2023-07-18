class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        num_freq = [0,0,0]
        for num in nums:
            num_freq[num] += 1
        
        for i in range(len(nums)):
            if num_freq[0] > 0:
                nums[i] = 0
                num_freq[0] -= 1
            elif num_freq[1] > 0:
                nums[i] = 1
                num_freq[1] -= 1
            else:
                nums[i] = 2