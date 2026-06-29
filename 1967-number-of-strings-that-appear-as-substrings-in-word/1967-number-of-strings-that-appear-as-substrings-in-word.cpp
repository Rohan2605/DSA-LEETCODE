class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        vector<int> freq(26,0);
        int cnt = 0;

        for(char c: word){
            freq[c-'a']++;
        }

        for(string s: patterns){
            if(word.find(s) != string::npos) cnt++;
        }
        return cnt;
    }
};