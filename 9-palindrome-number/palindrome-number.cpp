class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if ( x < 0 ) return false;
        long long rev = 0;
        while(x != 0){
            int rem = x%10;
            // if (rev > INT_MAX / 10 || rev < INT_MIN / 10 ) return false;
            rev = rev * 10 + rem;
            x = x/10;
        }
        return temp == rev;
    }
};