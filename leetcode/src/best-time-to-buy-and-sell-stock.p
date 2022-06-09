# https://leetcode.com/problems/best-time-to-buy-and-sell-stock

"""
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
"""

"""
Solution: scan through the array, one value at a time, keeping a running maximum profit
- if next value < current LOW value, reset high and low value to next value
- if next value > current LOW value, see if you can get a bigger profit with same LOW and new HIGH
"""
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        max_profit_overall = 0
        
        hi = prices[0]
        lo = prices[0]
        
        for price in prices:
            if price < lo:
                hi = lo = price
                continue
            else:
                hi = max(hi, price)
                max_profit_overall = max(max_profit_overall, hi - lo)
        
        
        return max_profit_overall
