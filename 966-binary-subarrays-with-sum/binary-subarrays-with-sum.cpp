class Solution {
    int atmost(vector<int> & nums, int goal){
        int left = 0;
        int n = nums.size();
        int totalcount = 0;
        int cursum = 0;
        for(int right = 0; right < n ; right++){
            cursum += nums[right];
            while( left <= right && cursum>goal){
                cursum -= nums[left];
                left++;
            }
            totalcount += right - left + 1;
        }
        return totalcount;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums, goal) - atmost(nums, goal - 1);
        // int total = 0;
        // int cursum = 0;
        // unordered_map<int,int> freq;
        // for(int num: nums){
        //     cursum += num;
        //     if(cursum == goal){
        //         total++;
        //     }
        //     if(freq.find(cursum - goal) != freq.end()){
        //         total += freq[cursum - goal];
        //     }
        //     freq[cursum]++;
        // }
        // return total;
    }
};