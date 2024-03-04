from queue import deque
class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        total = sum(nums)
        N = len(nums)
        if total%2 == 1:
            return False
        half_total = total/2
        
        s = set()
        s.add(0)
        for num in nums:
            next_s = set()
            for x in s:
                if num + x == half_total:
                    return True
                next_s.add(x)
                next_s.add(num + x)
            s = next_s

        return False
            