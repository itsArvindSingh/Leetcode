class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int num: nums){
            if(num != val){
                swap(num, nums[i++]);
            }
        }
        return i;
    }
};