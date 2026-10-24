class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int zero_count = 0;
        int left = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                zero_count++;
            }
            while(zero_count > k){
                if(nums[left] == 0){
                    zero_count--;
                }
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
        // int ans = 0;
        // int n = nums.size();
        // int left = 0 ;
        // int zero_count = 0;
        // for(int right = 0 ; right < n ; right++){
        //     if(nums[right] == 0){
        //         zero_count++;
        //     }
        //     while( zero_count > k ){
        //         if(nums[left] == 0){
        //             zero_count--;
        //         }
        //         left++;
        //     }
        //     ans = max(right - left + 1, ans);
        // }
        // return ans;
    }
};