class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex + 1;
        vector<int> row(n, 1);
        long long cur_val = 1;
        for(int i = 1; i < n - 1; i++){
            cur_val = cur_val * (n - i) / i;
            row[i] = cur_val;
        }
        return row;
        // vector<vector<int>> ans ;
        // vector<int> prev;
        // int n = rowIndex;
        // for(int i = 0; i < n+1 ; i++){
        //     vector<int> cur(i+1, 1);
        //     for(int j = 1 ; j < i ; j++){
        //         cur[j] = prev[j] + prev[j-1];
        //     }
        //     prev = cur;
        //     ans.push_back(cur);
        // }
        // return ans.back();
    }
};