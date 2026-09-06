class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0; // positive
        int j = 1; // negative
        vector<int> ans(nums.size(),0);
        for(int num : nums){
            if( num > 0){
                ans[i] = num;
                i += 2;
            }else{
                ans[j] = num;
                j += 2;
            }
        }
        return ans;
    }
};