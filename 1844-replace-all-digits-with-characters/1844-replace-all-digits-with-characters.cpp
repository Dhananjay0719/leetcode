class Solution {
public:
    string replaceDigits(string s) {
      for(int i=0;i<s.size();i++)
      {  
      if(i%2==1)
      {
      int ascii=(int)s[i-1];
      s[i]=(char)(ascii+s[i]-'0');
      }
      }
    return s;
    }
};