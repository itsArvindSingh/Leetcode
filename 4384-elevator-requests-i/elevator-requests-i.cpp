class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int step = requests[0];
        for(int i = 0; i<requests.size() - 1; i++){
            step += abs(requests[i+1] - requests[i]);
        }
        return step;
    }
};