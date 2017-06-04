class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        map<int,int>vis;
        for(int i = 0;i<len;i++)
        {
            if(!vis.count(nums[i]))vis[nums[i]]++;
            else return true;
        }
        return false;
    }
};
