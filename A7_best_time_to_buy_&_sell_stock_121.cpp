class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int less=prices[0];
        int ans =0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<less){
                less = prices[i];
            }
            else{
                ans = max(ans, prices[i]-less);
            }   
        }
        return ans;
    }
};