class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,char>m1;
        map<char,char>m2;
        for(int i=0;i<t.size();i++){
            if(m1.count(t[i])==0){
                m1[t[i]]=s[i];
            }
            else{
                if(s[i]!=m1[t[i]])
                return false;
            }

            if(m2.count(s[i])==0){
                m2[s[i]]=t[i];
            }
            else{
                if(t[i]!=m2[s[i]])
                return false;
            }
        }
        return true;
    }
};