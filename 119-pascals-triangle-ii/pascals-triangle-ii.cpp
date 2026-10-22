class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans ;
        vector<int> prev;
        int n = rowIndex;
        for(int i = 0; i < n+1 ; i++){
            vector<int> cur(i+1, 1);
            for(int j = 1 ; j < i ; j++){
                cur[j] = prev[j] + prev[j-1];
            }
            prev = cur;
            ans.push_back(cur);
        }
        return ans.back();
    }
};