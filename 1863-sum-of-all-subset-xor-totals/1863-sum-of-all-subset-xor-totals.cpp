class Solution {
public:
    void countsum(int idx,vector<int> & nums, int &ans, int xorsum){
        if(idx==nums.size()){
            ans=ans+xorsum;
            return;
        }

        countsum(idx+1,nums,ans,xorsum xor nums[idx]);
        countsum(idx+1,nums,ans,xorsum);
    }
    int subsetXORSum(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        int ans=0;
        int xorsum=0;
        int ind=0;
        countsum(ind,nums,ans,xorsum);
        return ans;
    }
};