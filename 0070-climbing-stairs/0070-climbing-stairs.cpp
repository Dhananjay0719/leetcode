class Solution {
public:
    int climbStairs(int n) {
    if(n==1){
      return 1;
    }
    int f=1,s=2;
    for(int i=3;i<=n;i++){
        int temp=f+s;
        f=s;
        s=temp;
    }
    return s;
    }
};