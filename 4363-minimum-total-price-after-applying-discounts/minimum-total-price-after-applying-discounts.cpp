class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());
        double final_price = 0.0;
        int n = min(prices.size(), discounts.size());
        for(int i = 0; i<n; i++){
            final_price += prices[i] * (( 100.00 - discounts[i] ) / 100.00 );
        }
        for(int i = n; i<prices.size(); i++){
            final_price += prices[i];
        }
        return final_price;
    }
};