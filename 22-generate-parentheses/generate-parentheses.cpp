class Solution {
    vector<string> res;
    void backtrack(string cur, int open, int close, int max){
        if(cur.length() == 2 * max){
            res.push_back(cur);
            return;
        }
        if(open< max){
            backtrack(cur + "(", open + 1, close, max);
        }
        if(close < open){
            backtrack(cur + ")", open, close + 1, max);
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        backtrack("", 0,0, n);
        return res;
    }
};