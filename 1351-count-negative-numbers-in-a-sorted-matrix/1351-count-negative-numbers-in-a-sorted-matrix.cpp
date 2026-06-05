class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rowSize = grid.size();
        int colSize = grid[0]. size();
        int row = 0;
        int col = colSize-1;
        int cnt=0;

        while(row<rowSize && col>=0){
            if(grid[row][col]>=0) row++;
            else{
                cnt += rowSize - row;
                col--;
            }
        }
        
        return cnt;
    }
};