class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            int bits = __builtin_popcount(i);
            if(bits == k) sum += nums[i];
        }
        return sum;
    }
};