class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiagonal=INT_MIN;
        int maxarea=INT_MIN;

        for(int i=0;i<dimensions.size();i++){
            int rowdia=pow(dimensions[i][0],2)+pow(dimensions[i][1],2);
            int area=dimensions[i][0]*dimensions[i][1];
            if(rowdia>maxdiagonal || (rowdia==maxdiagonal && area>maxarea)){
                maxdiagonal=rowdia;
                maxarea=area;
            }
        }
        return maxarea;
    }
};