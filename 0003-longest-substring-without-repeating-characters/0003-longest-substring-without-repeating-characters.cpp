class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>fr(256,0);
        int maxlength=0;
        //sliding window algo O(n)
        int first=0,second=0;
        while(second<s.size()){
          while(fr[s[second]]){
            fr[s[first]]=0;
            first++;
          }
        fr[s[second]]=1;
        maxlength=max(maxlength,second-first+1);
        second++;
        }
        return maxlength;
    }
};