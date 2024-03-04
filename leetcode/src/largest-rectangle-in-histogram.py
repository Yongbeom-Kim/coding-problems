# https://leetcode.com/problems/largest-rectangle-in-histogram/description/
class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = []
        maxArea = 0
        heights.append(0)
        for i, h in enumerate(heights):
            start = i
            while stack and stack[-1][1] > h:
                pi, ph = stack.pop()
                start = pi # min(min_pi, pi) but pi is decreasing
                maxArea = max(maxArea, (i - pi)*ph)
            stack.append((start, h))
        
        return maxArea