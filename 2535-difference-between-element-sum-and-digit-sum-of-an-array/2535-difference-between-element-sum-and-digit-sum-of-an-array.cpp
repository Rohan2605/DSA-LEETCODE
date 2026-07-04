class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);

        int digitSum = 0;
        for(int x: nums){
            while(x){
                digitSum += x%10;
                x /= 10;
            }
        }

        return abs(sum - digitSum);
    }
};