class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int lens = nums.size();
        for(int i = 0;i<lens;i++)
            ans^=nums[i];
        return ans;
    }
};
