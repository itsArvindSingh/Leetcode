class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        vector<int> prev;
        int n = numRows;
        for(int i = 0; i < n ; i++){
            vector<int> cur(i+1, 1);
            for(int j = 1 ; j < i ; j++){
                cur[j] = prev[j] + prev[j-1];
            }
            prev = cur;
            ans.push_back(cur);
        }
        return ans;
    }
};