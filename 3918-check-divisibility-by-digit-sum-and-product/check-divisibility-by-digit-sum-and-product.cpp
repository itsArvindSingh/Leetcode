class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum = 0;
        int digitMul = 1;
        int digit = log10(n) + 1;
        int temp = n;
        for(int i = 0; i < digit ; i++){
            digitSum += temp%10;
            digitMul *= temp%10;
            temp = temp/10;
        }
        
        return n % ( digitSum + digitMul) == 0;
    }
};