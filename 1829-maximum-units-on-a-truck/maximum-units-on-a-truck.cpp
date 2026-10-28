class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> & a, vector<int> & b){
            return a[1] > b[1];
        });
        int ans = 0;
        for(auto &b: boxTypes){
            int x = min(truckSize, b[0]);
            ans += x * b[1];
            truckSize -= x;
            if(!truckSize) break;
        }
        return ans;
    }
};