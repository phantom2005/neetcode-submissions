class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0];
        int maxpr=0;;
        for(int i=1;i<prices.size();i++){
            b=min(b,prices[i]);
            maxpr=max(maxpr,prices[i]-b);
        }
        return maxpr;
    }
};
