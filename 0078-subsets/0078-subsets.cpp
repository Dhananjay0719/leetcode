class Solution {
    public:
        vector<vector<int>>res;
        void solve(int ind,vector<int>&nums,vector<int> &curr){
            if(ind==nums.size())
            {
                res.push_back(curr);
                return;
            }

            curr.push_back(nums[ind]);
            solve(ind+1,nums,curr);

            curr.pop_back();
            solve(ind+1,nums,curr);
        }
        vector<vector<int>>subsets(vector<int>& nums){
            vector<int>curr;
            solve(0,nums,curr);
            return res;
        }
};