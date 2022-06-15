class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     int temp;   
     for(int i=0;i<words.size();i++)
     { string check=words[i];
      for(int j=0;j<check.size()/2;j++)
      {
       temp=check[j];
       check[j]=check[check.size()-1-j];
       check[check.size()-1-j]=temp;
      }
      if(words[i]==check){return words[i];}
     }
    return "";
    }
    };