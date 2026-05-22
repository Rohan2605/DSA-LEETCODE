class Solution {
public:
    int nSum(int n){
        int sum = 0;
        for(int i=0; i<=n; i++){
            sum += i;
        }
        return sum;
    }
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for(int x: nums){
            sum += x;
        }
        return nSum(n) - sum;
    }
};