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


""" 
    Solution 2: priority q
"""
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        h = []
        for point in points:
            heappush(h, ((point[0]*point[0]+point[1]*point[1]), point))
        
        return [k[1] for k in nsmallest(k, h)]


"""
    Solution 3: quickselect
"""
import random
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        lo = 0
        hi = len(points)

        while(True):
            left, right = self.partition(points, lo, hi)
            if (left <= k-1 and right >= k-1):
                return points[:k]
            elif (left > k-1):
                hi = left
            else:
                lo = right+1
                
    
    def partition(self, points: [List[List[int]]], start, end):
        pivot = random.randrange(start,end)
        points[pivot], points[start] = points[start], points[pivot]

        key = self.getDistance(points[start])
        lt = i = start + 1
        gt = end - 1
        while (i <= gt):
            dist = self.getDistance(points[i])
            if (dist < key):
                points[lt], points[i] = points[i], points[lt]
                i += 1
                lt += 1
            elif (dist == key):
                i += 1
            else:
                points[i], points[gt] = points[gt], points[i]
                gt -= 1
            # print(str(points) + "|" + str(lt)  + "|" + str(i)  + "|" + str(gt) )
        points[start], points[lt-1] = points[lt-1], points[start]
        return lt-1, i-1;
    
    def getDistance(self, point: List[int]):
        return point[0]*point[0]+point[1]*point[1]