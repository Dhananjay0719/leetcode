class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans=0
        minprice=prices[0]

        for i in range(1,len(prices)):
            if((prices[i]-minprice)>ans):
                ans=prices[i]-minprice
            minprice=min(minprice,prices[i])
            
        return ans
        