class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> v;
        int result = 0;
        for(int bit: nums){
            result = (result*2 + bit) % 5;
            v.push_back(result == 0);
        }
        return v;
    }
};