class Solution {
    bool isValid(vector<int> freq){
        return freq[0] > 0 && freq[1] > 0 && freq[2] > 0;
    }
public:
    int numberOfSubstrings(string s) {
        int len = s.length();
        int ans = 0;
        int left = 0, right = 0;
        vector<int> freq(3,0);
        while(right < len){
            freq[s[right] - 'a']++;

            while(isValid(freq)){ // check it subatring is valid or not
                ans += len - right;
                freq[s[left] - 'a']--;
                left++;
            }
            right++;
        }
        return ans;
    }
};