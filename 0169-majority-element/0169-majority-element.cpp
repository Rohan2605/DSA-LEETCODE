class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // O(n) solution -----------------------
        
        int n = nums.size();
        // int freq = 0, ans = 0;

        // for(int i=0; i<n; i++){
        //         if(freq == 0) ans = nums[i];
        //         if(ans == nums[i]) freq++;
        //         else freq--;
        // }
        // return ans;

        // O(nlogn) solution --------------------
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];

        // O(n) with O(n)-space
        map<int, int> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        int majority = n/2;

        for(auto x: mp){
            if(x.second>majority) return x.first;
        }
        return -1;
    }
};