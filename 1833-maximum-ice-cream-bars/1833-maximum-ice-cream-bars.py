class Solution(object):
    def maxIceCream(self, costs, coins):
        """
        :type costs: List[int]
        :type coins: int
        :rtype: int
        """
        costs = sorted(costs)
        counter =0
        # print(costs2)
        for cost in costs:
            if(cost<=coins):
                coins -= cost
                counter +=1
            else:
                break
        return counter
        