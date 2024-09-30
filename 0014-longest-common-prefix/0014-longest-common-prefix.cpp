class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        for(int i=0;i<strs[0].size();i++){
         bool match=true;
         for(int j=1;j<strs.size();j++){
            if(strs[0][i]!=strs[j][i]){
                match=false;
            }
         }
         if(match==false){
            break;
         }
         else{
            ans.push_back(strs[0][i]);
         }
        }
        return ans;
    }
};