// class Solution {
// public:
//     int maxmoney(vector<int> &nums,int i){
//         if(i>=nums.size()){return 0;}

//         return max(maxmoney(nums,i+2)+nums[i],maxmoney(nums,i+1));
//     }
//     int rob(vector<int>& nums) {
//         return maxmoney(nums,0);
//     }
// };

class Solution {
public:
    vector<int>dp;
    int maxmoney(vector<int> &nums,int i){
        if(i>=nums.size()){return 0;}

        if(dp[i]!=-1) return dp[i];
        dp[i]=max(maxmoney(nums,i+2)+nums[i],maxmoney(nums,i+1));
        return max(maxmoney(nums,i+2)+nums[i],maxmoney(nums,i+1));
    }
    int rob(vector<int>& nums) {
        dp.assign(nums.size(),-1);
        return maxmoney(nums,0);
    }
};