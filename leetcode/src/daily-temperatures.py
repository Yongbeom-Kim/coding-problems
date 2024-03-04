class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:

        stack = []
        result = [0 for _ in range(len(temperatures))]
        for i, temp in enumerate(temperatures):
            while stack and stack[-1][0] < temp:
                result[stack[-1][1]] = i - stack[-1][1]
                stack.pop()
            stack.append([temp, i])
        
        return result
