// class Solution{
// public:
//     double myPow(double x, int n){
//         long long N = n;
//         long double base = x;
//         if(N < 0 ) {
//             N = -N;
//             base = 1.0/x;
//         }
//         double res = 1.0;
//         while(N > 0){
//             if( N & 1) res *= base;
//             base *= base;
//             N >>= 1;
//         }
//         return res;
//     }
// };


class Solution{
public:
    double myPow(double x, int n){
        long long N = n;
        long double base = x;
        if( N < 0 ) {
            N = -N;
            base = 1.0/base;
        }
        double res = 1.0;
        while( N > 0 ){
            if(N & 1) res *= base;
            base *= base;
            N >>= 1;
        }
        return res;
        
    }
};
