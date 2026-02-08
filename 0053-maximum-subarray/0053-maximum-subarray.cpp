class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0];
        int max_sum=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            currsum=max(nums[i],currsum+nums[i]);
            max_sum=max(max_sum,currsum);
        }
        return max_sum;
    }
};