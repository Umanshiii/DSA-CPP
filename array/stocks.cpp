https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int profit=0;
        int maxprofit=0;
        int minprice=prices[0];
        int n=prices.size();
        for(int i=0; i<n; i++)
        {
            if (prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else
            {
                profit=prices[i]-minprice;
                if (profit>maxprofit)
                {
                    maxprofit=profit;
                }
            }

        }
    return maxprofit;
    }
};