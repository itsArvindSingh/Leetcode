
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        int ans = 1;
        for(int i = 1; i < n ; i++){
            if(nums[i] == nums[i-1] + 1){
                count++;
            }else if(nums[i] == nums[i-1]){
                continue;
            }else{
                count = 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> numset(nums.begin(), nums.end());
//         int count = 0;
//         for(int num: numset){
//             if(numset.find(num-1) == numset.end()){
//                 int length = 1;
//                 while(numset.find(num + length) != numset.end()){
//                     length++;
//                 }
//                 count = max(count, length);
//             }
//         }
//         return count;
//     }
// };











// if(nums.empty()){
//             return 0;
//         }
//         set<int> numSet(nums.begin(), nums.end());
//         int count = 0;
//         for(int num: numSet){
//             if(numSet.find(num - 1) == numSet.end() ){
//                 int length = 1;
//                 while( numSet.find(num + length) != numSet.end()){
//                     length++;
//                 }
//                 count = max(count, length);
//             }
//         }
//         return count;