#include <string>

using namespace std;

class Solution {
private:
    // Helper function using a switch statement for direct CPU jumps
    inline int getRomanValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s) {
        int sum = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int current = getRomanValue(s[i]);
            
            // Look ahead: if the next character has a higher value, subtract current
            if (i < n - 1 && current < getRomanValue(s[i + 1])) {
                sum -= current;
            } else {
                sum += current;
            }
        }
        
        return sum;
    }
};
