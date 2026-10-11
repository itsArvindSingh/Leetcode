class Solution {
public:
    string removeOuterParentheses(string s) {
        int l, r;
        int n = s.size();
        string ans = "";
        int left;
        for(int i = 0; i < n; i++){
            left = i;
            l = 0;
            r = 0;
            while(true){
                if(s[i] == '('){
                    l++;
                }else{
                    r++;
                }
                if(l == r ){
                    break;
                }
                i++;
            }
            ans += s.substr(left+1, i - left -1);
        }
        return ans;
        // int n = s.size();
        // string ans = "";
        // int left = 0;
        // for (int i = 0; i < n ; i++){
        //     left = i;
        //     int lcount = 0;
        //     int rcount = 0;
        //     while (true){
        //         if(s[i] == '(' ){
        //             lcount++;
        //         }else{
        //             rcount++;
        //         }
        //         if(lcount == rcount){
        //             break;
        //         }
        //         i++;
        //     }
        //     ans += s.substr(left+1, i-left-1);
        // }
        // return ans;
    }
};