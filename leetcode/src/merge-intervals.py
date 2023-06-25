class Solution:
    def is_overlapping(self, interval1: List[int], interval2: List[int]):
        if (interval1[0] > interval2[0]):
            interval1, interval2 = interval2, interval1
        
        return interval1[1] >= interval2[0]
    
    def merge_two_intervals(self, interval1: List[int], interval2: List[int]):
        assert self.is_overlapping(interval1, interval2)

        return [min(interval1[0],interval2[0]),max(interval1[1],interval2[1])]
        

    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x:x[0])
        merged_intervals = []
        for interval in intervals:
            merged_intervals.append(interval)
        
            while (
                len(merged_intervals) > 1 and 
                self.is_overlapping(merged_intervals[-2],merged_intervals[-1])
            ):
                merged_intervals[-2] = self.merge_two_intervals(merged_intervals[-2],merged_intervals[-1])
                del merged_intervals[-1]

        return merged_intervals
                

