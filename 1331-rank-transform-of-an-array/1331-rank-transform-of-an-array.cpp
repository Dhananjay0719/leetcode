class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>st(arr.begin(),arr.end());
        map<int,int>rankmap;
        int n=arr.size();
        int rank=1;
        for(auto a:st){
            rankmap[a]=rank++;
        }
        for(int i=0;i<n;i++){
            arr[i]=rankmap[arr[i]];
        }
        return arr;
    }
};