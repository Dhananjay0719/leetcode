class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         bool ans=false;
         int i=0;
         while(i<nums.size()-1)
         {
             if(nums[i]==nums[i+1])
             {
                 ans=true;
             }
             i++;
         }
        return ans;
      }
    };