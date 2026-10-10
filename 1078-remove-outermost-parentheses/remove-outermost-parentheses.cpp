class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int left = 0;
        for (int i = 0; i < n ; i++){
            left = i;
            int lcount = 0;
            int rcount = 0;
            while (true){
                if(s[i] == '(' ){
                    lcount++;
                }else{
                    rcount++;
                }
                if(lcount == rcount){
                    break;
                }
                i++;
            }
            ans += s.substr(left+1, i-left-1);
        }
        return ans;
    }
};