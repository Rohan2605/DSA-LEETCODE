class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> mp;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i]==nums2[j]){
                    mp[nums1[i]]++;
                }
            }
        }

        for(auto x: mp) {
            v.push_back(x.first);
        }
        return v;
    }
};