class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st; // stack to store answer vector
        int i = 0 ;

        while(i < nums.size()){
            int num = nums[i];
            if( st.empty() || st.top() < 0 || num > 0 ){
                st.push(num);
                i++;
            }else if( st.top() > abs(num)) i++;
            else if( st.top() == abs(num)) {
                st.pop();
                i++;
            }else{
                st.pop();
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


