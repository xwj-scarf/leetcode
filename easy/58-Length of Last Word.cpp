class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        if(len==0)return 0;
        int ans = 0;
        int l;
        for(l = len-1;l>=0;l--)
        {
            if(s[l]!=' ')break;
        }
        for(int i = l;i>=0;i--)
        {
            if(s[i]==' ')break;
            ans++;
        }
        return ans;
    }
};
