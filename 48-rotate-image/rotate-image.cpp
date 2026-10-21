class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        // for(int i = 0 ;i < n/2; i++){
        //     for(int j = i; j <= n - i - 2 ;  j++){
        //         swap(matrix[i][j], matrix[j][n-i-1]);
        //         swap(matrix[n-j-1][i], matrix[n-i-1][n-j-1]);
        //         swap(matrix[i][j], matrix[n-i-1][n-j-1]);
        //     }
        // }
        // int n = matrix.size();
        // for(int i = 0; i < n / 2 ; i++){
        //     for( int j = i ; j <= n - i - 2 ; j++){
        //         swap(matrix[i][j], matrix[j][n-i-1]);
        //         swap(matrix[n-i-1][n-j-1], matrix[n-j-1][i]);
        //         swap(matrix[i][j], matrix[n-i-1][n-j-1]);
        //     }
        // }
    }
};