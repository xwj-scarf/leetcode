class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int len = prices.size();
        for(int i = 0;i<len-1;i++)
            ans+=(prices[i+1]-prices[i]>0?prices[i+1]-prices[i]:0);
        return ans;
    }
};
