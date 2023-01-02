"""
    Solution 1: Custom Sort
"""
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        # Solution:
        # Just sort the points with a custom key/comparator function, and take first k elements
        # I think this is a good exercise to do on C++ as well
        def keyFunction(point: List[int]):
            return point[0]*point[0]+point[1]*point[1]       
        points = sorted(points, key=keyFunction)

        return points[0:k]