class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int fxor = 0, nxor = 0;
        int n = nums.size();
        if( n % 4 == 0 ) fxor = n;
        else if( n % 4 == 1) fxor = 1;
        else if( n % 4 == 2) fxor = n + 1;
        else fxor = 0;
        
        for(int num: nums){
            nxor ^= num;
        }
        return nxor^fxor;
    }
};