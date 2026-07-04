class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> vp;

        for(int i=0; i<s.size(); i++){
            vp.push_back({indices[i], s[i]});
        }

        sort(vp.begin(), vp.end());

        string ans="";
        for(int i=0; i<vp.size(); i++){
            ans += vp[i].second;
        }

        return ans;
    }
};