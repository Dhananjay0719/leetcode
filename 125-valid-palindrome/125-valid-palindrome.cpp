class Solution {
public:
    bool isPalindrome(string s) {
      string ans="";
      for(int i=0;i<(s.length());i++)
      {
       if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
        {ans+=s[i];}
       if(s[i]>=65 && s[i]<=90)
        {  s[i]+=32;
           ans+=s[i];}
       }
       int p=0;
       int q=(ans.length())-1;
        while(p<=q){
            if(ans[p]!=ans[q])
            {return false;}
            p++;
            q--;
        }
        
        return true;
    }
};