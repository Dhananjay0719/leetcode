class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        
        int prev=1,curr=2,temp;
        for(int i=3;i<=n;i++)
        {
            temp=prev+curr;
            prev=curr;
            curr=temp;
        }
        return curr;
    
    }
};