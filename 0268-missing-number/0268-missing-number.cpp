class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1,0);

        for(int x: nums){
            v[x]++;
        }

        auto it = find(v.begin(), v.end(), 0);
        return it-v.begin();
    }
};