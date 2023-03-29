"""
TOP_DOWN_DP:
"""

INT_MAX = 100000
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = dict()

        def helper(amt):
            if amt == 0:
                return 0
            if amt not in dp:
                dp[amt] = INT_MAX
                for coin in coins:
                    if (amt >= coin):
                        dp[amt] = min(dp[amt], helper(amt-coin)+1)
            return dp[amt]

        result = helper(amount)
        if (result == INT_MAX):
            return -1
        else:
            return result

