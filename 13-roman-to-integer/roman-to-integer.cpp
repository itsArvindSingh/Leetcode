class Solution {
public:
    int romanToInt(string s) {
        
        vector<char> index = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        vector<int> value = {1,5,10,50,100,500,1000};

        int n = s.length();
        int prev = s[n-1];
        int sum = value[find(index.begin(), index.end(), s[n-1]) - index.begin()];

        for(int i = n - 2; i >= 0 ; i--){

            int prev_idx = find(index.begin(), index.end(), prev)- index.begin();
            int curr_idx = find(index.begin(), index.end(), s[i])- index.begin();

            if(prev_idx > curr_idx){
                sum -= value[curr_idx];
            }else {
                sum += value[curr_idx];
                prev = s[i];
            }
        }
        return sum;
    }
};