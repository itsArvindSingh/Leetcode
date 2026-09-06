class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        set<int> numSet(nums.begin(), nums.end());
        
        int maxCount = 0;
        for( int n : numSet){
            if( numSet.find(n-1) == numSet.end() ){
                int length = 1;
                while( numSet.find(length + n) != numSet.end()){
                    length++;
                }
                maxCount = max(maxCount, length);
            }
        }

        return maxCount ;
    }
};