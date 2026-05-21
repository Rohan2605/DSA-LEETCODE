class Solution {
public:
    bool isAnagram(string s, string t) {
        //Map based solution------------

        // map<char, int> mp;

        // for(auto ch: s){
        //     mp[ch]++; 
        // }
        // for(auto ch: t){
        //     mp[ch]--;
        // }

        // for(auto x : mp){ 
        //     if(x.second != 0)
        //         return false;
        // }        
        // return true; 

        // vector based solution --------------------

        vector<int> nums(26, 0);

        for(auto x : s){
            nums[x - 'a']++;
        }
        for(auto x: t){
            nums[x - 'a']--;
        }

        // check here if all vector values are 0 or not
        return count(nums.begin(), nums.end(), 0) == 26;
    }
};