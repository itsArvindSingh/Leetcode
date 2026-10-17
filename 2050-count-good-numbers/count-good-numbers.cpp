class Solution {
    static constexpr int mod = 1000000007;
    long long pow(int x, long long n){
        long long res = 1;
        long long base = x;
        while(n > 0){
            if( n & 1) res = (long long )res * base % mod;
            base = (long long) base * base % mod;
            n >>= 1;
        }
        return res;
    }
public:
    int countGoodNumbers(long long n) {
        long long evenmul = pow(5,(n+1)/2);
        long long oddmul = pow(4,(n)/2);
        return (long long) evenmul*oddmul % mod;
    }
};