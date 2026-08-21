class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majorityElement = -1 ;
        int currCount = 0;
        for(int i = 0; i < n ; i++){
            if( currCount == 0){
                currCount = 1;
                majorityElement = nums[i];
            }else if ( majorityElement == nums[i]){
                currCount++;
            }else{
                currCount--;
            }
        }
        int curr = count(nums.begin(), nums.end(), majorityElement);
        return curr > n/2 ? majorityElement : -1 ;
    }
};