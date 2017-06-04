class Solution {
public:
    int longestPalindrome(string s) {
        int len = s.size();
        map<char,int>vis;
        for(int i = 0;i<len;i++)
            vis[s[i]]++;
        int maxodd = 0,ans=0;
        int numodd = 0,sumodd=0;
        for(map<char,int>::iterator it = vis.begin();it!=vis.end();it++)
        {   
            if((it->second)&1) 
            {
                numodd++;
                maxodd = max(maxodd,it->second);
                sumodd += it->second;
            }
            else ans+=(it->second);
        }
        ans+=(numodd==1?maxodd:(numodd==0?0:sumodd-(numodd-1)));
        return ans;
    }
};
