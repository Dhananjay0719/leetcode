class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(auto a:nums){
            s.insert(a);
            if(s.size()>3){
                s.erase(s.begin());
            }
        }
        int n=s.size();
        if(n<3){
            return *s.rbegin();
        }
        else{
            return *s.begin();
        }
    }
};