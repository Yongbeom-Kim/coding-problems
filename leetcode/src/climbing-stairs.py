"""
https://leetcode.com/problems/climbing-stairs
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45
"""

# Solution 1: Recursive DP
class Solution:
    def climbStairs(self, n: int) -> int:
        memo = [-1] * (n+1)
        memo[0] = memo[1] = 1
        
        def calculate(n: int):
            if memo[n] != -1:
                return memo[n]
            
            memo[n] = calculate(n-1) + calculate(n-2)
            return memo[n]
    
        return calculate(n)

# Solution 2: Iterative DP
class Solution:
    def climbStairs(self, n: int) -> int:
        memo = [1, 1]
        if n < 2:
            return memo[n]
        
        for i in range(2, n+1):
            memo.append(memo[i-1]+memo[i-2])
        
        return memo[n]
      
      
# Solution 3: Iterative DP (space-optimised)
class Solution:
    def climbStairs(self, n: int) -> int:
        if n < 2:
            return 1
        
        a = b = 1
        for i in range(2, n+1):
            a, b = b, a+b
        
        return b
