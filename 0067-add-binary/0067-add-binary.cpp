class Solution {
public:
    string addBinary(string a, string b) {
        int size1=a.length()-1;
        int size2=b.length()-1;
        string ans="";
        int base=2;
        int c=0;
        while(size1>=0 || size2>=0){
            int t1=0,t2=0;
            if(size1>=0){
                t1=a[size1--]-'0';
            }
            if(size2>=0){
                t2=b[size2--]-'0';
            }
            int sum=t1+t2+c;
            if(sum==base){
              c=1;
              sum=sum-base;
            }
            else{
                c=0;
            }
            ans+=to_string(sum);
        }
        if(c==1){
            ans+=to_string(c);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
};