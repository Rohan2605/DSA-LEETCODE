class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        //Counting sort
        int ans = 0;

        vector<int> freq(100001,0);

        for(int x: costs){
            freq[x]++;
        }

        for(int price=1; price<=100000; price++){

            if(freq[price]==0) continue;

            int canBuy = min(freq[price], coins/price);

            ans += canBuy;
            coins -= canBuy * price;

            if(coins<price) break;
        }
        return ans;

    }
};