class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int maxIce = 0;
        int cnt=0;

        long long currSum = 0;
        for(int x: costs){
            currSum += x;
            cnt++;

            if(currSum<=coins){
                maxIce = cnt;
            }

        }
        return maxIce;
    }
};