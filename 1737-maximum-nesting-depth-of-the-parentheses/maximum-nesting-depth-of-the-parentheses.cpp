class Solution {
public:
    int maxDepth(string s) {
        int lcount = 0 ;
        int ans = 0;

        for(char c: s){
            ans = max(ans,lcount);
            if(c == '('){
                lcount++;
            }else if( c ==')'){
                lcount--;
            }
        }
        return ans;
    }
};