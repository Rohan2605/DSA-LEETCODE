class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> maxCandy(n, false);

        int maxi = *max_element(candies.begin(), candies.end());

        for(int i = 0; i<n; i++){
            int candy = candies[i] + extraCandies;
            if(candy>= maxi) maxCandy[i] = true;
        }

        return maxCandy;
    }
};