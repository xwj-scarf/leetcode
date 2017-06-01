class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
   /* int Sort(vector<int>&a,int low,int high)
    {
        int priot = a[low];
        while(low<high)
        {
            while(low<high && a[high]>=priot)
                high--;
            a[low]=a[high];
            while(low<high && a[low]<=priot)
                low++;
            a[high]=a[low];
        }
        a[low]=priot;
        return low;
    }
    int findK(vector<int>& nums,int k,int low,int high)
    {
        if(low>=high) return nums[low];
        else
        {
            int mid = Sort(nums,low,high);
            
            if (mid > k)
                 return findK(nums,k,low,mid-1);
            else if (mid<k)
                 return findK(nums,k,mid+1,high);
            else return nums[mid];
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        return findK(nums,nums.size()-k,0,nums.size()-1);
    }*/
    
};
