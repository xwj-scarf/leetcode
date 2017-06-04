class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        int ans = 0;
        int sum = n;
        for(int i = 1;i<n;i++)
        {
            sum-=i;
            ans++;
            if(sum<0)return ans-1;
            if(sum<i+1)return ans;
        }
    }
};
