class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<bool>markrow(rows,false);
        vector<bool>markcol(cols,false);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    markrow[i]=true;
                    markcol[j]=true;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(markrow[i] || markcol[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};