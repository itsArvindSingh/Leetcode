class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;

        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int> & b){
            return a[1] > b[1];
        });

        for(auto b: boxTypes){
            int x = min(b[0], truckSize);
            ans += x * b[1];
            truckSize -= x;
            if(!truckSize) break;
        }
        return ans;
    }
};