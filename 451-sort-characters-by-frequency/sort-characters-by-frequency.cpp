class Solution{
public:
	string frequencySort(string s){
        int n = s.length();
        unordered_map<char, int> freq;
        for(int i = 0; i < n ; i++){
            freq[s[i]]++;
            }

        vector<pair<char,int>> v(freq.begin(), freq.end());
        sort(v.begin(), v.end() ,
                [ ] (auto &a, auto &b){
                return a.second > b.second;
                }
        );
        string ans = "";
        for(auto & [c, f]: v){
            ans += string(f,c);
            }
        return ans;
    }
};
