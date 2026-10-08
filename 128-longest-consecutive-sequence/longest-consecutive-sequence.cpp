class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numset(nums.begin(), nums.end());
        int count = 0;
        for(int num:numset){
            if(numset.find(num-1) == numset.end()){
                int length = 1;
                while(numset.find(num + length) != numset.end()){
                    length++;
                }
                count = max(count, length);
            }
        }
        return count;
    }
};











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