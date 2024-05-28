class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # variables
        buy_price = prices[0]
        max_profit = 0

        # iter list
        for price in prices[1:]:            
            max_profit = max(max_profit, price - buy_price)
            buy_price = min(buy_price, price)

        # return the max possible profit
        return max_profit