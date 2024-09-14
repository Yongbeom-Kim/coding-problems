class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        result = []

        intervals.sort(key=lambda x:x[0])

        current_interval = intervals[0]

        for interval in intervals:
            if interval[0] <= current_interval[1]:
                current_interval[1] = max(current_interval[1], interval[1])
                continue
            result.append(current_interval)
            current_interval = interval
        result.append(current_interval)

        return result
        