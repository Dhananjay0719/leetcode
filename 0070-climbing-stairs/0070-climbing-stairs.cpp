class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
        return 1;

        else if(n==2)
        return 2;
        
        int first=1,second=2,total;
        for(int i=3;i<=n;i++){
        total=first+second;
        first=second;
        second=total;
        }

        return total;
    }
};