class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n ; i++){// store squared value of element in array
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        return accumulate(nums.begin() + n/2 , nums.end(), 0LL) - accumulate(nums.begin(), nums.begin() + n/2, 0LL);
    }
};