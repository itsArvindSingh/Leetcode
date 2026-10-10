class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int divisor = INT_MAX;
        sort(nums.begin(), nums.end());
        int left = 1;
        int right = nums[n-1];
        while(left<=right){
            int sum = 0 ;
            int mid = left + (right - left)/2;
            for(int i = 0; i < n ; i++){
                sum += ceil( double (nums[i])/ double (mid));
            }
            if(sum<=threshold){
                if(divisor>mid){
                    divisor = mid;
                }
                right = mid - 1;
            }else{
                left = mid + 1;
            }

        }
        return divisor;
    }
};