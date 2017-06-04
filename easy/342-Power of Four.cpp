class Solution {
public:
    bool isPowerOfFour(int num) {
        //if(num<0)return false;
        //map<long long,int>vis;
        //for(int i = 0;i<=16;i++)
        //{    
        //    long long n = pow(4.0,i);
        //     vis[n]=1;
        //}
        //if(vis[num])
        //    return true;
        //else return false;
        while(num && num%4==0)
        {
            num/=4;
        }
        return num==1?true:false;
    }
};
