class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowcount[9][9]={0};
        int columncount[9][9]={0};
        int gridcount[9][9]={0};
    
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){

            if(board[i][j]!='.')
            {
            int number=board[i][j]-'0';
            int k=(i/3)*3+j/3;
            if(rowcount[i][number-1] || columncount[j][number-1] || gridcount[k][number-1]){
                return false;
            }
            rowcount[i][number-1]++;
            columncount[j][number-1]++;
            gridcount[k][number-1]++;
            }
            }
        }
        return true;
    }
};
