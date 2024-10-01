class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int tp=0;
        vector<bool>visit(arr.size(),false);
        for(int i=0;i<arr.size();i++){
            if(visit[i])
            continue;
            else{
            for(int j=i+1;j<arr.size();j++){
                if(!visit[j] && (arr[i]+arr[j])%k==0){
                    tp++;
                    visit[i]=visit[j]=true;
                    break;
                }
            }
        }
        }
        if(tp==arr.size()/2){
            return true;
        }
        else{
            return false;
        }
    }
};