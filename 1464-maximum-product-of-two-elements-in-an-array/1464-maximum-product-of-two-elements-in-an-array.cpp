class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxin1=0;int maxin2=0;int maxp=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]*nums[j])>maxp)
                {
                    maxp=nums[i]*nums[j];
                    maxin1=i;
                    maxin2=j;
                }
            }
        }
        return (nums[maxin1]-1)*(nums[maxin2]-1);
    }
};