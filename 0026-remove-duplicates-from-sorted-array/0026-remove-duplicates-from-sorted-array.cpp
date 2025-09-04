class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int n=nums.size();
        if(n<=1) return n;
        int first=0,second=1;
        while(second<n)
        {
         if(nums[first]!=nums[second])
         {
          first++;
          nums[first]=nums[second];
         }
         second++;
        }
        return first+1;
    }
};