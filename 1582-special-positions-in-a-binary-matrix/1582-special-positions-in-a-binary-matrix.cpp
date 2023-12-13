class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> row_ones(m, 0), col_ones(n, 0);
        int res = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1) {
                    row_ones[i]++;
                    col_ones[j]++;
                }
            }
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1) {
                    if(row_ones[i]==1 && col_ones[j]==1) {
                        res++;
                    }
                }
            }
        }
        
        return res;
    }
};