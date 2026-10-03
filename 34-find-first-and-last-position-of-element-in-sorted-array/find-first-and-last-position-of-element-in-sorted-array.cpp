class Solution {
    int find(vector<int> &nums, int target, bool isFirst){
        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;
        while(left<=right){
            int mid = left  + (right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                if(isFirst){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }else if (nums[mid]> target){
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIdx = find(nums, target, true);
        int lastIdx = find(nums, target, false);
        return {firstIdx, lastIdx};
    }
};