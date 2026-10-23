class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        unordered_map<char,int> freq;
        int left = 0;
        for(int right = 0 ; right < n ; right++){
            if( freq.find(s[right]) != freq.end() && freq[s[right]] == 1 ){
                while(freq[s[right]] == 1){
                    freq[s[left]]--;
                    left++;
                }
            }
            freq[s[right]]++;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};