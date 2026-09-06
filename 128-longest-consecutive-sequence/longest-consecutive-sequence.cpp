class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> ans;
        if(nums.empty()){
            return 0;
        }
        for( int num: nums){
            ans.insert(num);
        }
        int currCount = 0, maxCount = 0;
        for( auto it = ans.begin(); it != prev(ans.end()); it++){
            auto nextIt = next(it);
            if( *it + 1  != *nextIt ){
                currCount = 0;
            }else if( *it + 1  == *nextIt ){
                currCount++;
                maxCount = max(maxCount, currCount);
            }
        }
        return maxCount + 1;
    }
};