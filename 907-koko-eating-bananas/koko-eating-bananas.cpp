class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        while(left<right){
            int mid = left + (right - left)/2;
            int time = 0;
            for(int num: nums){
                time += (num + mid - 1)/ mid;
            }
            if(time<=h){
                right = mid;
            }else {
                left = mid + 1;
            }
        }
        return right;
    }
};