class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = n*2;
        vector<int> v(m);

        for(int i=0; i<m; i++){
            if(i<n) v[i] = nums[i];
            else v[i] = nums[i-n];
        }
        return v;
    }
};