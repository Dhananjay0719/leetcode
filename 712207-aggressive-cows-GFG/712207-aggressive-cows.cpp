class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=-1;
        int start=1;
        int end=*max_element(nums.begin(),nums.end())-*min_element(nums.begin(),nums.end());

        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1,lastpositionofcow=nums[0];
            for(int i=0;i<n;i++){
              if(nums[i]-lastpositionofcow >= mid){
                 count++;
                 lastpositionofcow=nums[i];
              }
              if(count==k) break;
            }
            if(count==k){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
            return ans;
    }
};