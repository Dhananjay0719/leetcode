class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximumsum=INT_MIN;
        int n=nums.size();
        int prefix=0;
        for(int i=0;i<n;i++){
          prefix+=nums[i];
          maximumsum=max(maximumsum,prefix);
          if(prefix<0){
            prefix=0;
          }
        }
        return maximumsum;
    }
};