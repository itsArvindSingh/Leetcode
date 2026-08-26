class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int n = s.length();
        int totalOnes = 0;

        for (char c: s){
            if ( c == '1') totalOnes++;
        }

        if ( totalOnes < k){
            return "";
        }

        int left = 0;
        int ones = 0;

        int bestLen = INT_MAX;
        int bestStart = 0;

        for(int right = 0; right < n ; right++){
            if (s[right] == '1'){
                ones++;
            }
            while( ones > k){
                if(s[left] == '1'){
                    ones--;
                }
                left++;
            }
            while(left <= right && s[left] == '0' ){
                left++;
            }
            
            if ( ones == k ){
                int currentLen = right - left + 1;

                if (currentLen < bestLen )
                {
                    bestLen = currentLen;
                    bestStart = left;
                }
                else if ( currentLen == bestLen && s.compare(left, currentLen,
                                    s, bestStart, bestLen) < 0 ){
                    bestStart = left;
                }
            }
        }
        return s.substr(bestStart, bestLen);
    }
};