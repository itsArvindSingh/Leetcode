class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i = 0;
        int n = nums.size();
        for(int j = 0; j < n; j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i++]);
            }   
        }
        // int j = 0;
        // for(int num: nums){ // wrong approach
        //     if(num!=0){
        //         swap(num,nums[j++]);
        //     }
        // }
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i]!=0){
        //         swap(nums[i],nums[j++]);
        //     }
        // }
    }
};