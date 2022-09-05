class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int>row,col;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    if(row[i] == 0){
                        row[i]++;
                    }
                    if(col[j] == 0){
                        col[j]++;
                    }
                }
            }
        }
        
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row[i] != 0 || col[j] != 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};