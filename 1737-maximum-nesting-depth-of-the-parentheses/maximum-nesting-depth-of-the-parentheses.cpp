class Solution {
public:
    int maxDepth(string s) {
        int l = 0, r = 0;
        int ans = 0;
        for(char c: s){
            if(c == '('){
                l++;
            }else if(c == ')'){
                l--;
            }
            ans = max(ans, l);
        }
        return ans;














        // int lcount = 0 ;
        // int ans = 0;

        // for(char c: s){
        //     if(c == '('){
        //         lcount++;
        //     }else if( c ==')'){
        //         lcount--;
        //     }
        //     ans = max(ans,lcount);
        // }
        // return ans;
    }
};