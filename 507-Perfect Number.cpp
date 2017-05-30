class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0)return false;
        vector<int>v;
        for(int i = 1;i<sqrt(num);i++)
        {
            if(num%i==0)
            {
                v.push_back(i);
                if(i!=1)
                    v.push_back(num/i);
            }
        }
        int len = v.size();
        int tmp = 0;
        for(int i = 0;i<len;i++)
            tmp+=v[i];
        if(tmp == num) return true;
        return false;
    }
};
