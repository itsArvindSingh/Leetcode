class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            if(freq.find(target - nums[i]) != freq.end()){
                return {i, freq[target - nums[i]]};
            }
            freq[nums[i]] = i;
        }
        return {-1,-1};
    }
};