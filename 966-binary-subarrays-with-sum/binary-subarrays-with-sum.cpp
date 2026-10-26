class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int zeros = 0;
        int left = 0, right = 0;
        int n = nums.size();
        int total = 0;
        int cursum = 0;
        while(right < n){
            cursum += nums[right];
            while(( left < right) && (nums[left] == 0 || cursum > goal)){
                if(nums[left] == 0){
                    zeros++;
                }else{
                    zeros = 0;
                }
                cursum -= nums[left];
                left++;
            }
            if(cursum == goal){
                total += 1 + zeros;
            }
            right++;
        }
        return total;
    }
};