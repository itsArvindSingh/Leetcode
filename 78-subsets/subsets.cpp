class Solution {
    vector<vector<int>> ans;
    int n;
    
    void backtrack(vector<int>& nums, int first, vector<int> cur){
            ans.push_back(cur);

            for(int i = first; i < n ; i++ ){
                cur.push_back(nums[i]);
                backtrack(nums, i + 1,cur);
                cur.pop_back();
            }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<int> cur;
        backtrack(nums, 0, cur);
        return ans;
    }
};