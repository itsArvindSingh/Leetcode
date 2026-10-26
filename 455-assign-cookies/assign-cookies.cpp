class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int total = 0;
        int m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = 0;
        while(j < m && total < n){
            if(s[j] >= g[total]){
                total++;
            }
            j++;
        }
        return total;
    }
};