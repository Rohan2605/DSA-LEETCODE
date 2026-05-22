class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n*2);

        for(int i=0; i<n; i++){
             v[i] = nums[i];
        }
        for(int i=0; i<n; i++){
            v[i+n] = nums[i];
        }
        return v;
    }
};