class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto a:nums){
            m[a]=a;
        }
        for(int i=0;i<nums.size();i++){
            if(m.count(i)==0){
                return i;
            }
        }
        return nums.size();
    }
};