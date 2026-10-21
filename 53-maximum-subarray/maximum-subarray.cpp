class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, cur_sum = 0;
        for(int num: nums){
            cur_sum += num;
            sum = max(cur_sum, sum);
            if(cur_sum < 0){
                cur_sum = 0;
            }
        }
        return sum;
        // int n = nums.size();
        // int currSum = 0, sum = INT_MIN;
        // for(int i = 0; i < n ; i++){
        //     currSum += nums[i];
        //     sum = max( currSum, sum);
        //     if( currSum < 0){
        //         currSum = 0;
        //     }
        // }
        // return sum;
    }
};