class Solution {
public:
   bool isAnagram(string s, string t)
   {
    vector<int> f(26,0);
    for(char c: s){
        f[c- 'a']++;
    }
    for(char c: t){
        f[c - 'a']--;
    }
    for(int i: f){
        if(i!=0) return false;
    }
    return true;
   }
//    {

//     //  if(s.length() != t.length()) return false;
//     // sort(s.begin(), s.end());
//     // sort(t.begin(), t.end());
//     // return t == s;
//    }
    // if(s.length() != t.length()) return false;
    //    unordered_map<char, int> s1;
    //    unordered_map<char, int> s2;
    //    for(char c: s){
    //         s1[c]++;
    //     }
    //     for(char c: t){
    //         s2[c]++;
    //     }
    //     for(auto & [c,v]: s1){
    //         if(s1[c] != s2[c]) return false;
    //     }
    //     return true;
   
};

