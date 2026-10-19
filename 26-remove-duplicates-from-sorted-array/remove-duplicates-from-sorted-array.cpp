class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int n = nums.size();
        for(int j = 1 ; j < n  ; j++){
            if(nums[j] != nums[i-1]){
                swap(nums[j], nums[i++]);
            }
        }
        return i;


        // int n = nums.size();
        // if(n<=1) return n;
        // int j = 1;
        // for(int i = 1; i < n  ; i++){
        //     if(nums[i] != nums[j-1]){
        //         swap(nums[i],nums[j++]);
        //     }
        // }
        // return j;
    }
};