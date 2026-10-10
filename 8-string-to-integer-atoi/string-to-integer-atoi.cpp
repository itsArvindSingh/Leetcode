class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        int res = 0;
        while(i<n && s[i] == ' '){
            i++;
        }
        if(i==n){
            return 0;
        }

        int sign = 1;
        if(s[i] == '+'){
            i++;
        }else if(s[i] == '-'){
            sign = -1;
            i++;
        }
        
        while( i < n && isdigit(s[i])){
            int digit = s[i] - '0';
            if((INT_MAX - digit )/10 < res) return sign == 1 ? INT_MAX: INT_MIN;
            res = res * 10 + (digit);
            i++;
        }
        return (sign * res);
    }
};