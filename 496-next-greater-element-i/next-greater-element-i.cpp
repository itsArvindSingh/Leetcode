class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> st;
        for(int i = 0 ; i < nums1.size() ; i++){
            int j = 0;
            while( nums1[i] != nums2[j]){
                j++;
            }
            for(j = j + 1; j < nums2.size() ; j++){
                if( nums1[i] < nums2[j]){
                    st.push_back(nums2[j]);
                    break;
                }
            }
            if( j == nums2.size() ){
                st.push_back(-1);
            }
        }
        return st;
    }
};