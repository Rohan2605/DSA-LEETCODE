class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        vector<int> freq(20001, 0);

        for(int x : nums)
            freq[x + 10000]++;

        int ans = 0;
        bool take = true;

        for(int i = 0; i < 20001; i++) {

            while(freq[i]--) {

                int value = i - 10000;

                if(take)
                    ans += value;

                take = !take;
            }
        }

        return ans;
    }
};