class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        
        # traverse the array
        # update the minimum value so far
        # get the maximum profit based on the minVal and the currently pointed at price
        
        minVal = prices[0]
        maxProfit = 0
        
        for price in prices:
            if(price< minVal):
                minVal = price
            else:
                profit = price - minVal
                if(profit>maxProfit):
                    maxProfit = profit
        return maxProfit