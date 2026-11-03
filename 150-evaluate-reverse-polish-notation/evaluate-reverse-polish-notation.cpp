class Solution {
    long long solve(int x, int y, string op){
        if( op == "+") return x + y;
        else if ( op == "-") return x - y;
        else if ( op == "*") return x * y;
        else return x / y;
    }
    bool isOperator(string ch){

        if(
            ch == "+" ||
            ch == "-" ||
            ch == "/" ||
            ch == "*"
        )return true;
        else return false;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(int i = 0 ; i < tokens.size() ; i++){
            string ch = tokens[i];
            if( isOperator(ch) ){
                long long op2 = st.top();
                st.pop();
                long long op1 = st.top();
                st.pop();
                long long temp = solve(op1, op2, ch);
                st.push(temp);
            }
            else{
                long long op = stoi(ch);
                st.push(op);
            }
        }
        return st.top();
    }
};