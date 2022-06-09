class Solution {
public:
    int findGCD(vector<int>& nums) {
     int min=*min_element(nums.begin(),nums.end());
     int max=*max_element(nums.begin(),nums.end());
     int gcd=1;
     for(int i=2;i<=max;i++)
     {
      if(min%i==0 && max%i==0)
       gcd=i;
     }
    return gcd;
    }
};