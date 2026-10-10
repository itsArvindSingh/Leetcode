class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int divisor = INT_MAX;
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        while(left<=right){
            int sum = 0 ;
            int mid = left + (right - left)/2;
            for(int num: nums){
                sum += ceil( double (num)/ double (mid));
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