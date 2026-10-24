class Solution {
    int countTotalDays(string date, vector<int> prefixSum){
        int month = stoi(date.substr(0,2));
        int day = stoi(date.substr(3));
        return prefixSum[month - 1] + day;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> daysOfMonths = {31, 28, 31, 30, 31, 30,
                                    31, 31, 30, 31, 30, 31};
        vector<int> prefixSum(1,0);
        for(int days: daysOfMonths){
            prefixSum.emplace_back(prefixSum.back() + days);
        }
        int aa = countTotalDays(arriveAlice, prefixSum);
        int al = countTotalDays(leaveAlice, prefixSum);
        int ba = countTotalDays(arriveBob, prefixSum);
        int bl = countTotalDays(leaveBob, prefixSum);
        int a = max(aa, ba);
        int l = min(al, bl);
        return max(0, l - a + 1);
    }
};