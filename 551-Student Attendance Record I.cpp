class Solution {
public:
    bool checkRecord(string s) {
        int len = s.size();
        int a = 0;
        for(int i = 0;i<len;i++)
        {
            if(s[i]=='A')a++;
            if(a>1)return false;
            if(s[i]=='L' && i<len-2 && s[i+1]=='L' && s[i+2]=='L') return false;
        }
        return true;
    }
};
