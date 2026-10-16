
class Solution {
public:
    vector<string> ans;

    void solve(string s, int open, int close, int n) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n)
            solve(s + "(", open + 1, close, n);

        if (close < open)
            solve(s + ")", open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        solve("", 0, 0, n);
        return ans;
    }
};
// class Solution {
//     vector<string> res;
//     void backtrack(string cur, int open, int close, int max){
//         if(cur.length() == 2 * max){
//             res.push_back(cur);
//             return;
//         }
//         if(open< max){
//             backtrack(cur + "(", open + 1, close, max);
//         }
//         if(close < open){
//             backtrack(cur + ")", open, close + 1, max);
//         }

//     }
// public:
//     vector<string> generateParenthesis(int n) {
//         backtrack("", 0,0, n);
//         return res;
//     }
// };