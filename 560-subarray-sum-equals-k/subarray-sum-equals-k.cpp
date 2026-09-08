class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> cammu;
        int sum = 0;
        int ans = 0;
        cammu[0] = 1;
        for(int num : nums){
            sum += num;
            if( cammu.find(sum-k) != cammu.end()){
                ans += cammu[sum-k];
            }
            cammu[sum]++;
        }
        return ans;
    }
};