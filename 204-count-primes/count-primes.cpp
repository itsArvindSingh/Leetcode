class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<char> prime(n,true) ;
        int primeCount = n/2;
        for(long long i = 3; i*i < n; i += 2){
            if(prime[i]){
                for(long long j = i*i ; j < n ; j += 2 * i){
                    if(prime[j]){
                        prime[j] = false;
                        primeCount--;
                    }
                }
            }
        }
        return primeCount;
    }
};