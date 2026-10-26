class Solution {
    int atmost(vector<int>& nums, int goal){
        int totalcount = 0, left = 0, right = 0;
        int cursum = 0;
        int n = nums.size();
        while(right < n){
            cursum += nums[right];
            while(left <= right && cursum > goal){
                cursum -= nums[left];
                left++;
            }
            if(cursum <= goal){
                totalcount += right - left + 1;
            }
            right++;
        }
        return totalcount;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums, goal) - atmost(nums, goal-1);
    }
};