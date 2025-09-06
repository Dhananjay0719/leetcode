class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long ans=0;
        for(auto it:queries){
            long long l=it[0];
            long long r=it[1];
            long long low=1,high=3,k=1;
            long long operations=0;
            while(low<=r){
                long long start=max(low,l);
                long long end=min(high,r);

                if(start<=end){
                    operations+=(end-start+1)*k;
                }
                low=low*4;
                high=high*4+3;
                k++;
            }
            ans+=(operations+1)/2;
        }
        
        return ans;
    }
};