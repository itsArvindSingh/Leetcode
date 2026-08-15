class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n<=1) return;
        k = k % n;
        int currIndex = 0;
        vector<int> nums2 = nums;
        
        for(int i = 0; i<n-k ; i++){
            nums[i+k] = nums2[currIndex++];
        }
        for(int j = 0; j < k, currIndex<n ; j++){
            nums[j] = nums2[currIndex++];
        }
    }
};