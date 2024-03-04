from queue import PriorityQueue

class Solution:
    def smallestRange(self, nums: List[List[int]]) -> List[int]:

        minQ = PriorityQueue()
        max_so_far = -float('inf')
        min_range = None

        for i, num in enumerate(nums):
            minQ.put((num[0], i, 0))
            max_so_far = max(max_so_far, num[0])
        
        while True:
            minN, minList, minIndex = minQ.get()
            if min_range is None or min_range[1]-min_range[0] > max_so_far-minN:
                min_range = minN, max_so_far
            minIndex += 1
            if minIndex == len(nums[minList]):
                break

            minQ.put((nums[minList][minIndex], minList, minIndex))
            max_so_far = max(max_so_far, nums[minList][minIndex])
                

        return min_range
                

        