class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        int len = s.size();
        int p = 1;
        for(int i = len-1;i>=0;i--)
        {
            ans+=(s[i]-'A'+1)*p;
            p*=26;
        }
        return ans;
    }
};
