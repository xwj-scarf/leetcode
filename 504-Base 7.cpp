class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string ans = "";
        int flag = 1;
        if(num<0)flag=-1;
        int n = num;
        while(n!=0)
        {
            ans+=flag*(n%7)+'0';
            n/=7;
        }
        if(num<0)ans+='-';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
