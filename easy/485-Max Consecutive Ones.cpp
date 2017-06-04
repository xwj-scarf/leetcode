class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = nums.size();
        int ans = 0,tmp=0;
        for(int i = 0;i<len;i++)
        {
            while(nums[i]==1)
            {
                i++;
                tmp++;
            }
            ans = max(ans,tmp);
            tmp = 0;
        }
        return ans;
    }
};
