class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0;
        int maxLen = 0;
        unordered_map<int, int> freq;

        while(right<n){
            freq[nums[right]]++;

            while(freq[nums[right]]>k){
                freq[nums[left]]--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
            right++;
        }
        return maxLen;
    }
};