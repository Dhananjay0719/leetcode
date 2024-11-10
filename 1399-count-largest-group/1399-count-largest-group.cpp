class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> count(50,0);
        int maxi=0;
       for(int i=1;i<=n;i++){
           int num=i;
           int sum=0;
           while(num>0){
               int temp=num%10;
               sum+=temp;
               num/=10;
           }
           count[sum]++;
           maxi=max(maxi,count[sum]);
       }
       int ans=0;
       for(int j:count){
           if(j==maxi)
           ans++;
       }
       return ans;
    }
};