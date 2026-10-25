class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int total = 0;
        int cursum = 0;
        unordered_map<int,int> freq;
        for(int num: nums){
            cursum += num;
            if(cursum == goal){
                total++;
            }
            if(freq.find(cursum - goal) != freq.end()){
                total += freq[cursum - goal];
            }
            freq[cursum]++;
        }
        return total;
    }
};