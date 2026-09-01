class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, j = 0;
        for(int num : nums){
            if( num == 1){
                j++;
            }else {
                j = 0;
            }
            ans = max(ans, j);
        }
        return ans;
    }
};