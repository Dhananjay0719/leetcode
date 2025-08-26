class Solution {
public:
    int search(vector<int>& arr, int target) {
        int size=arr.size();
        int low=0,high=size-1;
        int mid=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(arr[0]<=arr[mid]){
                if(arr[mid]>target && target>=arr[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<target && target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};