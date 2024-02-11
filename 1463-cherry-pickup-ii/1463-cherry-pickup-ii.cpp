class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int t[71][71][71] = {0};
        

        t[0][0][n - 1] = (n == 1) ? grid[0][0] : grid[0][0] + grid[0][n - 1]; 
        
        for (int row = 1; row < m; row++) {
            for (int c1 = 0; c1 <= min(n-1, row); c1++) {     
                for (int c2 = max(0, n-1-row); c2 < n; c2++) { 
                    
                    int prev_max = 0;
                   
                    for (int column1 = max(0, c1 - 1); column1 <= min(n - 1, c1 + 1); column1++) {
                        for (int column2 = max(0, c2 - 1); column2 <= min(n - 1, c2 + 1); column2++) {
                                prev_max = max(prev_max, t[row - 1][column1][column2]);
                        }
                    }
                    
                    if (c1 == c2)
                        t[row][c1][c2] = prev_max + grid[row][c1];
                    else
                        t[row][c1][c2] = prev_max + grid[row][c1] + grid[row][c2];
                }
            }
        }
        
        int res = 0;
        //return max in last row 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res = max(res, t[m - 1][i][j]);    
            }
        }
        return res;
    }
};
