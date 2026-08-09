class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        double disc = 0;
        int j=0;

        for(int i=0 ; i<prices.size() ; i++)
        {
            if(j<discounts.size()){
                disc += (double) prices[i] * (100 - discounts[j]) / 100;
                j++;
            }
            else{
                disc += prices[i];
            }
        }

        return disc;
    }
};