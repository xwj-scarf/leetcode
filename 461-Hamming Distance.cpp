class Solution {
public:
    int hammingDistance(int x, int y) {
        int sum = x^y;
        int ans = 0;
        while(sum)
        {
            if(sum&1)ans++;
            sum>>=1;
        }
        return ans;
    }
};
