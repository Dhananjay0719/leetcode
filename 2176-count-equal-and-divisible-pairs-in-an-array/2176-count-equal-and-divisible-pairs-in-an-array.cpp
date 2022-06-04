class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
     int tp=0;
     for(int i=0;i<nums.size();i++)
     { for(int j=0;j<nums.size();j++)
       if(i<j)
       {
        if(nums[i]==nums[j])
        {if((i*j)%k==0){tp++;}}
       }
     }
    return tp;
    }
};