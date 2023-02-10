"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""
from collections import deque

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if (node is None):
            return None
        # We do a BFS
        q = deque()
        visited = dict()

        def getNodeCopy(val) -> 'Node':
            if (val not in visited):
                visited[val] = Node(val)
            return visited[val]

        q.appendleft(node)

        while(len(q) > 0):
            curr_node = q.pop()
            copy_node = getNodeCopy(curr_node.val)

            if (curr_node.neighbors is None):
                continue

            for neighbor in curr_node.neighbors:
                if (neighbor.val not in visited):
                    q.appendleft(neighbor)
                copy_neighbor = getNodeCopy(neighbor.val)

                if (copy_node.neighbors is None):
                    copy_node.neighbors = []
                copy_node.neighbors.append(copy_neighbor)

        return visited[node.val]
