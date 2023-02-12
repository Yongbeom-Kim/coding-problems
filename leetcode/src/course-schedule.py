from collections import deque

class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        """
        [i, j] = you must take j => i
        graph [i, j] = j --> i

        see if we can find a topological ordering
        khan's algorithm

        - take set of nodes with no incoming edges
        - remove nodes and edges attached to the nodes
        - repeat until graph is empty


        We represent graph with adj list
        """
        indegrees = [0]*numCourses
        adjList = [list() for i in range(numCourses)]

        for prereq in prerequisites:
            indegrees[prereq[0]] += 1
            adjList[prereq[1]].append(prereq[0])
        
        q = deque()
        visited = 0

        for i in range(numCourses):
            if (indegrees[i] == 0):
                q.appendleft(i)
        
        while (len(q) > 0):
            node = q.pop()
            visited += 1
            for neighbour in adjList[node]:
                indegrees[neighbour] -= 1
                if(indegrees[neighbour] == 0):
                    q.appendleft(neighbour)
        
        return visited == numCourses





        


        