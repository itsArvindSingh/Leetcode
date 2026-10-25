class Solution {
    bool isValid(vector<int> freq){
        return freq[0] > 0 && freq[1] > 0 && freq[2] > 0;
    }
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        int left = 0;
        vector<int> freq(3,0);
        for(int right = 0 ; right < n ; right++){
            freq[s[right] - 'a']++;

            while(isValid(freq)){ // check it subatring is valid or not
                ans += s.length() - right;
                freq[s[left] - 'a']--;
                left++;
            }
        }
        return ans;
    }
};