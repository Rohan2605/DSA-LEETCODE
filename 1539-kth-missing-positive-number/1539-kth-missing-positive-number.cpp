class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> freq(2001);
        for(int x: arr){
            freq[x]++;
        }

        int ans = 0;
        for(int i=1; i<2001; i++){
            if(freq[i] == 0 && k>0){
                ans = i;
                k--;
            }
        }
        return ans;
    }
};