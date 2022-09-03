class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int flag=1;
        for(int i=0;i<nums.size();i++)
        {   if(i==0)
            {
                ans.push_back(flag);
            }
            else
            {
                flag=flag*nums[i-1];
                ans.push_back(flag);
            }
        }
        flag=1;
        for(int i=nums.size()-1;i>=0;i--)
        {   if(i==nums.size()-1)
            {
                ans[i]=ans[i]*1;
            }
            else
            {
                flag=flag*nums[i+1];
                ans[i]=ans[i]*flag;
            }
        }
        return ans;
    }
};