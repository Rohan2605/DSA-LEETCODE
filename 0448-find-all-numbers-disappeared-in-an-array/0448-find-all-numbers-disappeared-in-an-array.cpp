class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1, 0);
        vector<int> ans;

        for(int x: nums){
            v[x]++;
        }
        for(int i=1; i<=n; i++){
            if(v[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};