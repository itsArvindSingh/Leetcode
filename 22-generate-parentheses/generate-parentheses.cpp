class Solution {
    void backtrack(vector<string> &res, string cur, int open, int close, int max){
        if(cur.length() == 2 * max){
            res.push_back(cur);
        }
        if(open< max){
            backtrack(res, cur + "(", open + 1, close, max);
        }
        if(close < open){
            backtrack(res, cur + ")", open, close + 1, max);
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0,0, n);
        return ans;
    }
};