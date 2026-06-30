class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);

        int i = 0;
        while(i<n){
            ans[i] = nums[i];
            i++;
        }

        reverse(nums.begin(), nums.end());

        while(i<2*n){
            ans[i] = nums[i%n];
            i++;
        }

        return ans;
    }
};