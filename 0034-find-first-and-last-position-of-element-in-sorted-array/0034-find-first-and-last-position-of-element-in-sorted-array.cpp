class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st  = std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int end = std::upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        if(st == end) return {-1, -1};
        
        return {st, end - 1};
    }
};