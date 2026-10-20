class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currCount = 0;
        int majorityElement = nums[0];
        for(int num: nums){
            if( currCount == 0 ){
                currCount++;
                majorityElement = num;
            }
            else if ( majorityElement == num ){
                currCount++;
            }
            else{
                currCount--;
            }  
        }
        return majorityElement;
    }
};