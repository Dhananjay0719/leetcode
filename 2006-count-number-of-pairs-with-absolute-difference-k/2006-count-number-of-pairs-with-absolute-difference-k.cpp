class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ct=0;
        for(int i=0;i<nums.size();i++)
        { for(int j=0;j<nums.size();j++)
        {  if(i<j)
          {if(nums[i]-nums[j]==k||nums[i]-nums[j]==-k)
            ct++;}
        }
      }
    return ct;
    }
};