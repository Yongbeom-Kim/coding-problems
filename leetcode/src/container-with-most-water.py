class Solution:
    def maxArea(self, height: List[int]) -> int:
        lo = 0
        hi = len(height)-1
        max_vol = 0
        while lo < hi:
            max_vol = max(max_vol, (hi-lo)*min(height[lo], height[hi]))
            if height[lo] < height[hi]:
                lo += 1
            else:
                hi -= 1
        
        return max_vol