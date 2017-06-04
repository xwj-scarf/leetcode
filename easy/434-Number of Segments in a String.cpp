class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        int lens = s.size();
        for(int i = 0;i<lens;i++)
        {
            if(s[i]!=' ')
            {
                while(s[i]!=' ' && i<lens)
                {
                    i++;
                }
                ans++;
            }
        }
        return ans;
    }
};
