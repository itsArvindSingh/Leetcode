class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n<=1) return 1;
        int i = 1;
        for(int j = 0; j < n ; j++){
            if ( nums[i-1] != nums[j] ){
                swap(nums[i++], nums[j]);
            }
        }
        return i; 
    }
};