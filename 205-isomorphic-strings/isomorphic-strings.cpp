class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        int mapst[256] = {0}, mapts[256] = {0};

        for(int i = 0; i < s.length(); i++){
            char a = s[i], b = t[i];

            if( mapst[a] == 0 && mapts[b] == 0 ){
                mapst[a] = b;
                mapts[b] = a;
            }else if( mapst[a] != b || mapts[b] != a){
                return false;
            }
        }
        return true;




        // int n = s.length();
        // unordered_map<char,char> freq;
        // for(int i = 0; i < n ; i++){
        //     if( freq.find(s[i]) == freq.end() ){
        //         freq[s[i]] = t[i];
        //     }else{
        //         if( freq[s[i]] != t[i]){
        //             return false;
        //         }
        //     }
        // }
        // return true;
    }
};