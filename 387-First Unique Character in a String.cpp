class Solution {
public:
    int firstUniqChar(string s) {
        int vis[26]={};
        int len = s.size();
        for(int i = 0;i<len;i++)
            vis[s[i]-'a']++;
        for(int i = 0;i<len;i++)
            if(vis[s[i]-'a']==1)
                return i;
        return -1;
    }
};
