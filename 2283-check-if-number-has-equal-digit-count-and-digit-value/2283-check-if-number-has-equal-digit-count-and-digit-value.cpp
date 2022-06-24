class Solution {
public:
    bool digitCount(string num) {
        bool ans;
        for(int i=0;i<num.size();i++)
        {   int ct=0;
        for(int j=0;j<num.size();j++){
            if(i==num[j]-'0'){ct++;}
        }
         if(ct==num[i]-'0'){ans=true;}
         else{ans=false;
             return ans;}
        }
        return ans;
    }
};