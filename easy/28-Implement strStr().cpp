class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle)return 0;
        int len_haystack = haystack.size();
        int len_needle = needle.size();
        for(int i = 0;i<=len_haystack-len_needle;i++)
        {
            int j = 0;
            for(j=0;j<len_needle;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==len_needle)return i;
        }
        return -1;
    }
};
