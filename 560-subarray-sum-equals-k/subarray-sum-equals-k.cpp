class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixsum;
        prefixsum[0] = 1;
        int ans = 0;
        int sum = 0;
        for(int num: nums){
            sum += num;
            // if(sum == k) ans++;
            if( prefixsum.find(sum - k) != prefixsum.end()){
                ans += prefixsum[sum - k];
            }
            prefixsum[sum]++;
        }
        return ans;
    }
};











//         unordered_map<int,int> cammu;
//         int sum = 0;
//         int ans = 0;
//         cammu[0] = 1;
//         for(int num : nums){
//             sum += num;
//             if( cammu.find(sum-k) != cammu.end()){
//                 ans += cammu[sum-k];
//             }
//             cammu[sum]++;
//         }
//         return ans;