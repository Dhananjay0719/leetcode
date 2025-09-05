class Solution {
public:
    int maxArea(vector<int>& height) {

        //Bruteforce Solution
        // int maxwater=0;
        // for(int i=0;i<height.size()-1;i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int sum= (j-i) * min(height[i],height[j]);   //l*b
        //         if(maxwater<sum){
        //             maxwater=sum;
        //         }
        //     }
        // }

        // return maxwater;

        int maxwater=0;
        int first=0,last=height.size()-1;
        
        while(first<last){
         int length=last-first;
         int breadth=min(height[first],height[last]);
         int sum=length*breadth;
         if(sum>maxwater){maxwater=sum;}

         if(height[first]<height[last]){first++;}
         else{last--;}
        }
        return maxwater;
    }
};