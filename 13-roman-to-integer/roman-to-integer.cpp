class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int n = s.length();
        int prev = s.back();
        int sum = roman[prev];

        for(int i = n - 2; i >= 0 ; i--){

            if(roman[s[i]] < roman[prev] ){
                sum -= roman[s[i]];
            }else {
                sum += roman[s[i]];
                prev = s[i];
            }
        }
        return sum;
    }
};