class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        // Calculate the sum of the first window of size k
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // Store the maximum window sum found so far
        long long maxSum = sum;

        // Slide the window across the array
        for (int i = k; i < n; i++) {
            // Add the incoming element and remove the outgoing element
            sum += nums[i];
            sum -= nums[i - k];

            // Update the maximum window sum
            maxSum = max(maxSum, sum);
        }

        // Maximum average = maximum window sum / window size
        return (double)maxSum / k;
    }
};