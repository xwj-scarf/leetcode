class Solution {
public:
    bool isAnagram(string s, string t) {
        int viss[26]={};
        int vist[26]={};
        int lens = s.size();
        for(int i = 0;i<lens;i++)
            viss[s[i]-'a']++;
        int lent = t.size();
        for(int i = 0;i<lent;i++)
            vist[t[i]-'a']++;
        for(int i = 0;i<26;i++)
            if(viss[i]!=vist[i]) return false;
        return true;
    }
};
