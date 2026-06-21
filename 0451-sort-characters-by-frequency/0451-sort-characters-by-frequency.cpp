class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c: s){
            freq[c]++;
        }

        vector<pair<int, char>> freqPair;
        for(auto m: freq){
            freqPair.push_back({m.second, m.first});
        }

        sort(freqPair.rbegin(), freqPair.rend());

        string ans="";
        for(auto p: freqPair){
            ans += string(p.first, p.second);
        }

        return ans;
    }
};