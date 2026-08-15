class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int ans = 0;
        int left = 0;
        for(int right = 0; right<s.length() ; right++){
            freq[s[right]]++;
            while( freq[s[right]] > 1 ){
                freq[s[left]] = freq[s[left]] - 1 ;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};