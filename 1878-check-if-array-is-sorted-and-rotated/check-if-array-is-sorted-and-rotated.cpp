class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

    vector<int> checkSorted(n);
    for(int i = 0; i < n ; i++){
        int j = 0;
        for(int l = i; l < n ; l++){
            checkSorted[l] = nums[j++];
        }
        for(int l = 0; l < i ; l++){
            checkSorted[l] = nums[j++];
        }
        bool isSorted = true;
        for(int k = 0; k < n - 1 ; k++){
            if ( checkSorted[k] > checkSorted[k+1] ){
                isSorted = false;
                break;
            }
        }
        if(isSorted){
            return true;
        }
    }
    return false;
    }
};