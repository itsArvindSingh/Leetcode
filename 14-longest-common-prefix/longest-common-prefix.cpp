class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        int minlen = INT_MAX;

        for(string str: strs){// to find mininum length
            minlen = min(minlen, (int)str.size());
        }

        for(int i = 0; i < minlen ; i++){
            char check = strs[0][i];
            bool ischeck = true;
            for(int j = 1; j < n ; j++){
                if(strs[j][i] == check){
                    continue;
                }else{
                    ischeck = false;
                    break;
                }
            }
            if(ischeck){
                ans += check;
            }else{
                break;
            }
        }
        return ans;
    }
};