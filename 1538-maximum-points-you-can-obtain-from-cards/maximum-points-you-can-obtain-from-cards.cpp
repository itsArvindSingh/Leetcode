class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res = 0, n = cardPoints.size();
        for(int i = 0 ; i < k ; i++){ // 1. get the sum of the first subarray
            res += cardPoints[i];
        }
        int cur = res;
        for(int i = k-1; i>=0; i--){
            cur -= cardPoints[i];
            cur += cardPoints[n-k+i];

            res = max(cur, res);
        }
        return res;


        // int sum =0; // brute force approach
        // int n = cardPoints.size();
        // for(int p = 0; p<=k ; p++){
        //     int cursum = 0;
        //     for(int i = 0; i < k - p ; i++){
        //         cursum += cardPoints[i];
        //     }
        //     for(int i = n-1; i>n-p-1 ; i--){
        //         cursum += cardPoints[i];
        //     }
        //     sum = max(sum, cursum);
        // }
        // return sum;
    }
};