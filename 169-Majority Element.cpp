class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int now = nums[0];
        int count = 1;
        int len = nums.size();
        for(int i = 1;i<len;i++)
        {
            if(now != nums[i])
            {
                count--;
                if(!count)
                {
                    count = 1;
                    now = nums[i];
                }
            }
            else count++;
        }
        return now;
    //    sort(nums.begin(),nums.end());
    //    return nums[nums.size()/2];
    }
};
