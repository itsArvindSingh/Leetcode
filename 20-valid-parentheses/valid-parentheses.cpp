class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> values;
        unordered_map<char,char> elem = {
            {')', '('}, { '}', '{'}, { ']', '['}
        };
        if(n & 1) return false;
        for(char ch: s){
            if ( ch == '(' || ch == '{' || ch == '['){
                values.push(ch);
            }else{
                if( !values.empty() &&  elem[ch] == values.top()){
                    values.pop();
                }else{
                    return false;
                }
            }
        }

        return values.size() == 0 ? true: false;
    }
};