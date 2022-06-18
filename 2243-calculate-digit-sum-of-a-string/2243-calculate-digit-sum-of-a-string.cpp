class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length()<=k) {
            return s;
        }
        string res="";
        int i=0;
        while(i<s.length()) {
            int count=0,sum=0;
            while(i<s.length() && count<k) {
                sum+=(s[i++]-'0');
                count++;
            }
            res+=to_string(sum);
        }
        return digitSum(res,k);
    }
};