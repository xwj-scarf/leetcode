class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int vis[26]={};
        int lenm = magazine.size();
        for(int i = 0;i<lenm;i++)
            vis[magazine[i]-'a']++;
        int lenr = ransomNote.size();
        for(int i = 0;i<lenr;i++)
        {
            if(!vis[ransomNote[i]-'a'])return false;
            vis[ransomNote[i]-'a']--;
        }
        return true;
    }
};
