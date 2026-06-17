class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0, right=k-1;
        
        long long sum=0;
        for(int i=0; i<k; i++) sum += nums[i];

        long long maxSum = sum;

        for(int i=k; i<n; i++){
            sum = sum + nums[i];
            sum = sum - nums[i-k];
            maxSum = max(sum, maxSum);

            left++, right++;
        }
        return (double)maxSum/k;
    }
};