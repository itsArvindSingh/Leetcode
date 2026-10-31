class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> id_value = {
            {'I', 1}, {'V', 5},{'X', 10}, {'L', 50}, {'C', 100},
             {'D', 500},
             {'M', 1000}
        };
        int ans = id_value[s.back()];
        int n = s.length();
        for(int i = 0; i <= n-2; i++){
            int cur = id_value[s[i]];
            int prev = id_value[s[i+1]];
            if(cur < prev){
                ans -= cur;
            }else{
                ans += cur;
            }
        }
        return ans;
    }
};
