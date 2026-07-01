class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v(102,0);
        vector<int> ans;
        for(int x: nums){
            v[x]++;
            if(v[x] == 2) ans.push_back(x);
        }
        return ans;
    }
};