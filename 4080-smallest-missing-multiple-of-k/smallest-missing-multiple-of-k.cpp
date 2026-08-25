class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> freq;
        for(int i = k; i <= 100 ; i = i+k){
            freq[i] = 0;
        }  
        for(int i = 0; i < n ; i++){
            if ( nums[i] % k == 0){
                freq[nums[i]]++;
            }
        }
        int i = k;
        while(freq[i] != 0){
            i = i + k;
        }
        return i;
    }
};