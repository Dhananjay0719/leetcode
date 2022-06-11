class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
     vector<int>ans;int freq;
     for(int i=0;i<nums.size();i=i+2)
     { 
      freq=nums[i];
      while(freq!=0)
      {
       ans.push_back(nums[i+1]);
       freq--;
      }
     }
        return ans;
    }
};