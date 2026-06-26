class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int cnt=0;
        int mx = *max_element(nums.begin(), nums.end());

        for(int x: nums){
            if(x == mx){
                cnt++;
                ans = max(cnt, ans);
            }
            else cnt = 0;
        }
        return ans;
    }
};