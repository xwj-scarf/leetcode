// 1 2 3 5 8 13 21
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        int stepone = 1;
        int steptwo = 2;
        int sum;
        for(int i = 3;i<=n;i++)
        {
            sum = stepone+steptwo;
            stepone = steptwo;
            steptwo = sum;
        }
        return sum;
    }
};
