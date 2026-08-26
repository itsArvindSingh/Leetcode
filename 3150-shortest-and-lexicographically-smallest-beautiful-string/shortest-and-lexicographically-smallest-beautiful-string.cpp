class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int n = s.length();
        int len = INT_MAX;
        int left = 0;
        int one_in_s = 0;
        int start = 0;
        for(int right = 0; right < n ; right++){
            if (s[right] == '1'){
                one_in_s++;
            }
            while( one_in_s > k){
                if(s[left] == '1'){
                    one_in_s--;
                }
                left++;
            }
            while( s[left] == '0' ){
                left++;
            }
            
            if ( one_in_s == k ){
                int currentLen = right - left + 1;
                if (currentLen < len )
                {
                    len = right - left + 1;
                    start = left;
                }
                else if ( currentLen == len ){
                    string current = s.substr(left, currentLen);
                    string previous = s.substr(start, len);

                    if ( current < previous ){
                        start = left;
                    }
                }
            }
        }
        return len == INT_MAX ? "": s.substr(start, len);
    }
};