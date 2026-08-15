class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int ans = 0;
        bool allZero = true;
        for( int x : nums){
            curr ^= x;
            if( x > 0 ){
                allZero = false;
            }
        }
        if ( curr > 0) return n;

        return allZero ? 0 : n-1;
    }
};