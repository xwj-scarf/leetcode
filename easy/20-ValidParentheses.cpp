class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int len = s.size();
        for(int i = 0;i<len;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(!st.size()) return false;
                char t = st.top();
                st.pop();
                if ((t=='(' && s[i]==')') || (t=='{' && s[i]=='}') || (t=='[' && s[i]==']'))
                {
                    continue;
                }
                else
                    return false;
            }
        }
        if (st.size()) return false;
        return true;
    }
};
