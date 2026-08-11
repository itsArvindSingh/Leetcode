class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0], i;
        for( i = 1; i<nums.size() ; i++){
            if ((nums[i-1] + 1) == nums[i]){
                sum += nums[i];
            }else{
                break;
            }
        }
        unordered_set<int> st(nums.begin(), nums.end());
        while(st.count(sum)){
            sum++;
        }
        return sum;
    }
};