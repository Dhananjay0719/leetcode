class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int lcount=0,rcount=0;
        bool deleted=false;
        int maxlength=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                deleted=true;
                while((i+1)<nums.size() && nums[i+1]!=0){
                    rcount++;
                    i++;
                }
                maxlength=max(maxlength,lcount+rcount);
                lcount=rcount;
                rcount=0;
            }
            else{
                lcount++;
            }
        }
        if(!deleted){return nums.size()-1;}
        return maxlength;
    }
};