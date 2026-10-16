class Solution {
    vector<string> res;
    string curr = "";
    void backtrack( int open, int close, int max){
        if(curr.length() == 2 * max){
            res.push_back(curr);
            return;
        }
        if(open< max){
            curr.push_back('(');
            backtrack(open + 1, close, max);
            curr.pop_back();
        }
        if(close < open){
            curr.push_back(')');
            backtrack(open, close + 1, max);
            curr.pop_back();
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        backtrack(0,0, n);
        return res;
    }
};