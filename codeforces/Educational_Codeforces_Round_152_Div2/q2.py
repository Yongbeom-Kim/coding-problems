import heapq

from typing import List
TC = int(input())

for _ in range(TC):
    n = int(input())
    k = int(input())

    heap: List[List[int, int]] = list(range(n))

    for i in range(k):
        heap[i] = [-int(input()),i]
    
    heapq.heapify(heap)

    while heap:
        heap[0][0] += k
        if heap[0][0] >= 0:
            heapq.heappop(heap)
            print(heap[0][1] + 1, end=' ')
    print()
    
    
