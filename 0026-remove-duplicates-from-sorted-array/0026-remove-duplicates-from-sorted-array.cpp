class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();

        int note=INT_MIN,index=0;

        for(int i=0;i<n;i++){
            if(note!=nums[i]){
                nums[index]=nums[i];
                note=nums[i];
                index++;
            }
        }

        return index;
    }
};