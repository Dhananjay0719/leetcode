class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mv;
        map<char,int> mc;
        int maxfreqv=0,maxfreqc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                mv[s[i]]++;
            }
            else{
                mc[s[i]]++;
            }
        }

        for(auto &p: mv){
            if(p.second>maxfreqv){
                maxfreqv=p.second;
            }
        }

        for(auto &p: mc){
            if(p.second>maxfreqc){
                maxfreqc=p.second;
            }
        }

        return maxfreqv+maxfreqc;
    }
};