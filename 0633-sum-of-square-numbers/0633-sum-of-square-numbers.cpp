class Solution {
public:
    bool judgeSquareSum(int c) {
        int start=0;
        int end=sqrt(c);
        while(start<=end){
          long long total=(start*start)+(end*end);
          if(total==c){
            return true;
          }
          else if(total>c){
            end--;
          }
          else{
            start++;
          }
        }
        return false;
    }
};