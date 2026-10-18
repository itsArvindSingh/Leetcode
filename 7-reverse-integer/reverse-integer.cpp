class Solution {
public:
    int reverse(int x) {
        long long n = 0;
        while(x!=0){
            int digit = x % 10;
            if( n  > INT_MAX/10) return 0;
            if( n  < INT_MIN/10) return 0;
            n = n * 10 + digit;
            x = x / 10;
        }
        return n;
    }
};