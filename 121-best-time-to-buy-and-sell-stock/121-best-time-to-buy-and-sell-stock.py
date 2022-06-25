class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans=0
        minimumSoFar=prices[0]
        for i in range(1,len(prices)):
            currentProfit=prices[i]-minimumSoFar
            if(currentProfit>ans):
                ans=currentProfit
            minimumSoFar=min(minimumSoFar,prices[i])
        return ans