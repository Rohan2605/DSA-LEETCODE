class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int, char> mp;
        for(int i=0; i<s.size(); i++){
            mp[indices[i]] = s[i];
        }

        string ans = "";
        for(int i=0; i<s.size(); i++){
            ans += mp[i]; 
        }

        return ans;
    }
};