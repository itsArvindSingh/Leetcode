class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int fxor = 0, nxor = 0;
        int n = nums.size();
        for(int i = 0 ; i <= n; i++){
            fxor ^= i;
        }
        for(int num: nums){
            nxor ^= num;
        }
        return nxor^fxor;
    }
};