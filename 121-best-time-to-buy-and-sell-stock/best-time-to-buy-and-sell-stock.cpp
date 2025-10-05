class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=prices[0],max_profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<curr)
                curr=prices[i];
            int diff=prices[i]-curr;
            if(diff>max_profit)
            max_profit=diff;
        }
        return max_profit;
    }
};