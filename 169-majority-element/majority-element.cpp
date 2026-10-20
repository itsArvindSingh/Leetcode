class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int currCount = 0;
        int majorityElement = -1;
        for(int i = 0; i < n ; i++){
            if( currCount == 0 ){
                currCount++;
                majorityElement = nums[i];
            }
            else if ( majorityElement == nums[i] ){
                currCount++;
            }
            else{
                currCount--;
            }  
        }
        return majorityElement;
    }
};