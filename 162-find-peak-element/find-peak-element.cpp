class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int left = 0; 
        int right = n - 1; 
        while(left <= right ){
            int mid = left + (right - left)/2;
            int l = mid - 1;
            int r = mid + 1;
            if( l != -1 && r != n ){
                if(nums[l] < nums[mid] && nums[r] < nums[mid]){
                    return mid;
                }else if(nums[l] < nums[r]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }else if( l == -1 && r != n){
                if(nums[r] < nums[mid]){
                    return mid;
                }else if( nums[r] > nums[mid]){
                    left = mid + 1;
                }
            }else if( r == n && l != -1 ){
                if(nums[l] < nums[mid]){
                    return mid;
                }else if ( nums[l] > nums[mid]){
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};