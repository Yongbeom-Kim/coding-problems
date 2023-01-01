class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        """
        binary search for place to insert
        repeat until no merge:
            look left - overlap -> merge
            look right - overlap -> merge
        """
        key = newInterval[0]
        lo = 0;
        hi = len(intervals)-1
        while (lo < hi):
            mid = lo+(hi-lo)//2
            print(str(lo) + "|" + str(hi))
            if(intervals[mid][0] < key):
                lo = mid+1
            else:
                hi = mid
        
        if (len(intervals) > 0 and intervals[lo][0] <= newInterval[0]):
            lo += 1
        
        intervals.insert(lo, newInterval)
        print(intervals)
        minLeft = newInterval[0]
        maxRight = newInterval[1]
        left = lo - 1
        while (left >= 0 and intervals[left][1]>=minLeft):
            minLeft = min(minLeft,intervals[left][0])
            maxRight = max(maxRight,intervals[left][1])
            left -= 1
        left += 1
        right = lo + 1
        while (right < len(intervals) and intervals[right][0]<=maxRight):
            minLeft = min(minLeft,intervals[right][0])
            maxRight = max(maxRight,intervals[right][1])
            right += 1
        right -= 1
        
        intervals.insert(left, [minLeft, maxRight])
        del intervals[left+1:right+2] 

        return intervals


        