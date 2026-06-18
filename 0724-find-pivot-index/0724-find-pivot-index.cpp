class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int runSum = 0;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        for(int i=0; i<n; i++){
            runSum += nums[i];

            int leftSum = runSum - nums[i];
            int rightSum = totalSum - runSum;
            if(leftSum == rightSum) return i;
        }
        return -1;
    }
};