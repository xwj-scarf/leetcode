class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        if(n<0)return false;
        while(n!=0)
        {
            if(n&1)count++;
            n>>=1;
        }
        return count==1?true:false;
    }
};
