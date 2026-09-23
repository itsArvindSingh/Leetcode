class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int first_i = -1;
        int last_i = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                first_i = mid;
                high = mid - 1;
            }else if( nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        low = 0; 
        high = n - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                last_i = mid;
                low = mid + 1;
            }else if( nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return {first_i,last_i};
    }
};