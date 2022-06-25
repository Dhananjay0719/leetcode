class Solution {
public:
    bool checkString(string s) {
        bool ans=false;
        for(int i=0;i<s.length();i++)
        {   if(s[i]=='b')
            {ans=true;}
            else if(ans && s[i]=='a')
            {return false;}
        }
        return true;
    }
};