class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        i = 0
        for j in range(len(nums)):
            if (abs(nums[j]) < abs(nums[i])):
                i = j;
        nums = list(map(lambda x: x*x, nums))
        
        i1 = i-1
        i2 = i+1
        result = [nums[i]]
        for k in range(len(nums)-1):
            if (i1 < 0):
                result.append(nums[i2])
                i2 += 1;
            elif (i2 >= len(nums)):
                result.append(nums[i1])
                i1 -= 1
            elif (nums[i1] > nums[i2]):
                result.append(nums[i2])
                i2 += 1;
            else:
                result.append(nums[i1])
                i1 -= 1


        return result