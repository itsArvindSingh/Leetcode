class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        // store absolute value of element in array
        for(int i = 0; i < n ; i++){
            nums[i] = abs(nums[i]);
        }
        int mid = n/2;
        long long leftsum = 0;
        long long rightsum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i<mid ; i++){ // left sum
            leftsum += nums[i] * nums[i];
        }
        for(int i = mid ; i < n ; i++){ // left sum
            rightsum += nums[i] * nums[i];
        }
        long long ans = rightsum - leftsum;
        return ans;
    }
};