# https://leetcode.com/problems/bus-routes/description/
from collections import deque

class Solution:
    def numBusesToDestination(self, routes: List[List[int]], source: int, target: int) -> int:
        if source == target:
            return 0
            
        adjList = [[] for _ in routes]
        routes = [set(r) for r in routes]

        for i, ri in enumerate(routes):
            for j, rj in enumerate(routes):
                if ri & rj:
                    adjList[i].append(j)
                    adjList[j].append(i)
        
        q = deque()
        dist = [-1 for _ in routes]

        for i, ri in enumerate(routes):
            if source in ri:
                q.append(i)
                dist[i] = 0

        while q:
            curr = q.popleft()
            if target in routes[curr]:
                return dist[curr] + 1

            for neighbour in adjList[curr]:
                if dist[neighbour] != -1:
                    continue
                dist[neighbour] = dist[curr] + 1
                q.append(neighbour)
        
        return -1