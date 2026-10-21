class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int  left = 0;
        int right = nums.size() - 1;
        int ans = nums.size();
        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                left = mid + 1;
            }else {
                ans = mid; right = mid -1;
            }
        }
        return ans;
        // int left = 0;
        // int right = nums.size()- 1;
        // int ans = nums.size();
        // while(left<=right){
        //     int mid = left + (right - left)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }else if(nums[mid]<target){
        //         left = mid + 1;
        //     }else {
        //         ans = mid;
        //         right = mid - 1;
        //     }
        // }
        // return ans;
    }
};





// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low = 0;
//         int high = n - 1;
//         int ans = n;
//         while( low <= high ){
//             int mid = low + (high - low)/2;
//             if (nums[mid] >= target){
//                 ans = mid;
//                 high = mid - 1;
//             }else {
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };