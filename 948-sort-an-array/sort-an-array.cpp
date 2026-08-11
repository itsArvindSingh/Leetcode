class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
    void merge_sort(vector<int> &nums, int left, int right){
        if(left < right){
            int mid = left + (right-left)/2;

            merge_sort(nums, left, mid);
            merge_sort(nums, mid + 1, right);

            merge(nums, left, mid, right);
        }
    }

    void merge(vector<int> &nums, int left, int mid, int right){
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1);
        vector<int> R(n2);

        for(int i = 0; i<n1; i++){
            L[i] = nums[left + i];
        }
        for(int i = 0 ; i<n2 ; i++){
            R[i] = nums[mid + 1 + i];
        }

        int i = 0, j = 0;
        int k = left;
        while(i<n1 && j<n2){
            if( L[i] <= R[j] ){
                nums[k] = L[i];
                i++;
            }
            else {
                nums[k] = R[j];
                j++;
            }
            k++;
        }

        while( i < n1){
            nums[k] = L[i];
            i++;
            k++;
        }

        while( j < n2 ){
            nums[k] = R[j];
            j++;
            k++;
        }

    }
};