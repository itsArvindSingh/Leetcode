class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prerows;
        for(int i = 0; i < numRows; i++){
            vector<int> currows(i+1, 1);
            for(int j = 1; j < i ; j++){
                currows[j] = prerows[j-1]+prerows[j];
            }
            prerows = currows;
            ans.push_back(currows);
        }
        return ans;
    }
};