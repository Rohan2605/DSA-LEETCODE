class Solution {
public:
    int minimumCost(vector<int>& cost) {
        vector<int> freq(101, 0);
        int cnt = 0, ans = 0;

        for(int x: cost){
            freq[x]++;
        }

        for(int i=100; i>=0; i--){
            while(freq[i] > 0){
                if(cnt == 2) cnt = 0;
                else{
                    ans += i;
                    cnt++;
                }
                freq[i]--;
            }
        }
        return ans;
    }
};