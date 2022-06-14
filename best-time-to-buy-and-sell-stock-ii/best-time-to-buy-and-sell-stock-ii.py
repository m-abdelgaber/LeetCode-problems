class Solution:
   
    def maxProfit(self, prices: List[int]) -> int:
        if(len(prices)<2):
            return 0
        profit =0
        i=0
        while i< len(prices)-1:
            valley=-1
            
            while(i<len(prices)-1):
                if (prices[i+1]<prices[i]):
                    i+=1
                else:
                    valley = prices[i]
                    break
            peak = -1
            while(i<len(prices)-1):
                if(prices[i+1]>prices[i]):
                    i+=1
                else:
                    peak = prices[i]
                    break
            if ( peak< valley):
                peak = prices[-1]
            profit += peak- valley
            i+=1
        return profit