class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> mp;

        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]] = i;
        // }

        // for(int i=0; i<nums.size(); i++){
        //     int complement = target - nums[i];
        //     if(mp.count(complement )  && mp[complement]!=i) return {i, mp[complement]};
        // }
        // return {};

       vector<pair<int, int>> arr;

       for(int i=0; i<nums.size(); i++){
            arr.push_back({nums[i], i});
       }

       sort(arr.begin(), arr.end());

       int left=0, right=arr.size()-1;
       while(left<right){
            int sum = arr[left].first + arr[right].first;
            if(sum==target) return {arr[left].second, arr[right].second};
            else if(sum>target) right--;
            else left++;
       }
       return {};
    }
};