class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int ptr=s.size()-1;
        while(s[ptr]==' ' ){
            ptr--;
        }
        string rv="";
        for(int i=ptr;i>=0;i--){
            if(s[i]==' '){
                if(!rv.empty()){
                reverse(rv.begin(),rv.end());
                ans+=rv;
                ans+=" ";
                rv="";
                }
              while(i>=0 && s[i]==' '){
                i--;
              }
              i++;
            }
            else{
                rv+=s[i];
            }
        }
        if(!rv.empty()){
            reverse(rv.begin(),rv.end());
            ans+=rv;
            }
        if(!ans.empty() && ans.back()==' ')
        ans.pop_back();
        return ans;
    }
};