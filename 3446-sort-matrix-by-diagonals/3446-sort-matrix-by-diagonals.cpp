class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();

        map<int,vector<int>>mpp;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                mpp[i-j].push_back(grid[i][j]);
            }
        }
        
        for(auto &it: mpp){
            if(it.first<0){
                sort(it.second.begin(),it.second.end());
            }
            else{
                sort(it.second.begin(),it.second.end(),greater<int>());
            }
        }
  
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                grid[i][j]=mpp[i-j].back();
                mpp[i-j].resize(mpp[i-j].size()-1);
            }
        }
        return grid;
    }
};