class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxEl = *max_element(nums.begin(), nums.end());
        int minEl = *min_element(nums.begin(), nums.end());
        int ans=-1;

        for(int x: nums){
            if(x != maxEl && x != minEl) ans = x;
        }
        return ans;
    }
};