class Solution {
public:
    int maxDepth(string s) {
        int left, lcount ;
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n ; i++){
            left = i;
            lcount = 0;
            while(i<n){
                ans = max(ans,lcount);
                if(s[i] == '('){
                    lcount++;
                }else if(s[i]==')'){
                    lcount--;
                }
                i++;
            }
        }
        return ans;
    }
};