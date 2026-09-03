class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0, sum = INT_MIN;
        for(int i = 0; i < n ; i++){
            currSum += nums[i];
            sum = max( currSum, sum);
            if( currSum < 0){
                currSum = 0;
            }
        }
        return sum;
    }
};