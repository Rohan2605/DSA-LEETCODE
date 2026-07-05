class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int cnt = 0;
        int currSum = 0;

        for(int i=0; i<nums.size()-1; i++){
            sum -= nums[i];
            currSum += nums[i];
            if(abs(currSum - sum) % 2 == 0) cnt++;
        }

        return cnt;
    }
};