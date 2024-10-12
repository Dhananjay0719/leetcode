class Solution {
public:
    void merge(vector<int>&arr,int l,int mid,int r){
        vector<int> a(r-l+1);
        int first=l,second=mid+1,pos=0;
        while(first<=mid &&second<=r){
            if(arr[first]<=arr[second]){
                a[pos++]=arr[first++];
            }
            else{
                a[pos++]=arr[second++];
            }
        }
        while(first<=mid){
            a[pos++]=arr[first++];
        }
        while(second<=r){
            a[pos++]=arr[second++];
        }
        pos=0;mid=l;
        while(mid<=r){
            arr[mid++]=a[pos++];
        }
    }
    void mergesort(vector<int>&arr,int l,int r){
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    vector<int> sortArray(vector<int>& nums) {
       int l=0;
       int r=nums.size()-1;
       mergesort(nums,l,r);
       return nums;
    }
};