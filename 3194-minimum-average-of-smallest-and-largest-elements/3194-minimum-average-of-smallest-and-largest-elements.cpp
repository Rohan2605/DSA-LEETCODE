class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int i=0, j=n-1;
        double ans = DBL_MAX;

        while(i<j){
            ans = min(ans, (nums[i] + nums[j])/2.0);
            i++; j--;
        }
        return ans;
    }
};