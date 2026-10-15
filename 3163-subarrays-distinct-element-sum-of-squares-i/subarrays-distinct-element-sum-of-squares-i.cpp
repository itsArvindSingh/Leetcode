class Solution{
public:
    int sumCounts(vector<int> nums){
        int n = nums.size();
        int res = 0;
        for(int i = 0 ; i < n ; i++){
        unordered_set<int> ele;
        for(int j = i  ;  j < n; j++){
        ele.insert(nums[j]);
        res += ele.size() * ele.size();
        }
        }
        return res;
}
};
