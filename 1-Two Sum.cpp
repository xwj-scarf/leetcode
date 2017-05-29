class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>vis;
        vector<int>ans;
        int len = nums.size();
        for(int i = 0;i<len;i++){
            vis[nums[i]]=i;
        }
        for(int i = 0;i<len;i++){
            if(!vis.count(target-nums[i]))continue;
            else if(vis[target-nums[i]] <= i)continue;
            else{
                ans.push_back(i);
                ans.push_back(vis[target-nums[i]]);
            }
        }
        
        return ans;
    }
};
