class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int j = 0, i = 0; j<n ; j++){
            if ( nums[j] != 0){
                swap(nums[j], nums[i++]);
            }
        }
    }
};