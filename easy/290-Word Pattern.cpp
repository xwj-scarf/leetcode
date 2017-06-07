class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string>vis;
        map<string,int>vis1;
        vector<string>v;
        int lenpat = pattern.size();
        int lenstr = str.size();
        for(int i = 0;i<lenstr;i++)
        {
            string tmp = "";
            while(str[i]!=' '&&i<lenstr)
            {    
                tmp+=str[i];
                i++;
            }
            v.push_back(tmp);
      //      cout<<tmp<<endl;
        }
        if(lenpat!=v.size())return false;
        int pos = 0;
        for(int i = 0;i<lenpat;i++)
        {
            if(!vis.count(pattern[i]) && !vis1.count(v[pos]))
                vis[pattern[i]]=v[pos],vis1[v[pos]]=1;
            else if (vis[pattern[i]]!=v[pos])return false;
            pos++;
        }
        return true;
    }
};
