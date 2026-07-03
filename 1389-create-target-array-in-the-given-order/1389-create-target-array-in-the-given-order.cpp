class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target;

        int j = 0;
        for(int i: index){
            target.insert(target.begin() + i, nums[j++]);
        }
        return target;
    }
};