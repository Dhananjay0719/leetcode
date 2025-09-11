class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size()-1;
        int j=0;
        int col=matrix[0].size();

        while(i>=0 && j<col){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                i--;
            }
            else{
                j++;
            }
        }

        return false;
    }
};