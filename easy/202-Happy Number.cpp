class Solution {
public:
    int GetNext(int n)
    {
        int ans = 0;
        while(n)
        {
            int d = n%10;
            ans+=d*d;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if (n<=0) return false;
        map<int,int>vis;
        while(n!=1)
        {
            if(vis[n])return false;
            else vis[n]=1;
            n = GetNext(n);
        }
        return true;
    }
};
