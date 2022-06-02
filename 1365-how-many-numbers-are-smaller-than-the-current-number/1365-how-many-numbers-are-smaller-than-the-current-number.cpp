class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int ct;
        for(int i=0;i<nums.size();i++)
        {   ct=0;
            for(int j=0;j<nums.size();j++)
            { if(j!=i)
              {
               if(nums[j]<nums[i])
                   ct++;
              }
              if(j==nums.size()-1){ans.push_back(ct);}
            }
        }
        return ans;
    }
};