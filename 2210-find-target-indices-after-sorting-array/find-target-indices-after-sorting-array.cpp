class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int idx = -1;
        int left = 0;
        int right = n - 1;
        while(left<=right){
            int mid = left + (right  - left)/2;
            if( nums[mid] >= target){
                idx = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        if(idx == -1) return ans;
        for( int i = idx; i < n ; i++){
            if(nums[i] != target) break;
            ans.push_back(i);
        }
        return ans;
    }
};