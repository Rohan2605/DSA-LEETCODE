class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> freq;

        for(char c: word1){
            freq[c]++;
        }

        for(char c: word2){
            freq[c]--;
        }

        for(auto x: freq){
            if(x.second > 3 || x.second < -3) return false;
        }

        return true;
    }
};