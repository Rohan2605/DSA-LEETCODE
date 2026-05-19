class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> v;

        for(int x :nums){
            mp[x]++;
        }

        int n = nums.size()/3;

        for(auto x: mp){
            if(x.second > n) v.push_back(x.first);
        }
        return v;
    }
};