class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int min = prices[0];
        for(int price: prices){
            if( price < min){
                min = price;
            }
            maxi = max(price - min , maxi);
        }  
        return maxi;
    }
};