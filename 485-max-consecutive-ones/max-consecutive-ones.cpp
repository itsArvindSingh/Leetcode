class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int j = 0;
        for(int i = 0; i < n ; i++){
            if( nums[i] == 1){
                j++;
            }else {
                j = 0;
            }
            ans = max(ans, j);
        }
        return ans;
    }
};