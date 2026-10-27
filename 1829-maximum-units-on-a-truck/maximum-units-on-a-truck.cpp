class Solution {
public:
    static bool myfunction(vector<int> & a, vector<int> & b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;

        sort(boxTypes.begin(), boxTypes.end(), myfunction);

        for(auto b: boxTypes){
            int x = min(b[0], truckSize);
            ans += x * b[1];
            truckSize -= x;
            if(!truckSize) break;
        }
        return ans;
    }
};