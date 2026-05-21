class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        int maxCntNo = -1, maxEvenNo = -1;

        for(int x: nums){
            mp[x]++;
        }

        for(auto x: mp){
            if(x.first%2==0 && x.second > maxCntNo){
                maxCntNo = x.second;
                maxEvenNo = x.first;
            }
        }
        return maxEvenNo;
    }
};