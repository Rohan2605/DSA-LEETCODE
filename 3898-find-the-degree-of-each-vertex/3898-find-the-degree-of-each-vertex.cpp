class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(vector<int> v: matrix){
            int sum = accumulate(v.begin(), v.end(), 0);
            ans.push_back(sum);
        }
        return ans;
    }
};