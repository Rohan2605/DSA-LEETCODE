class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26,0);
        for(char c: allowed){
            freq[c-'a']++;
        }

        int cnt = 0;
        for(string s: words){
            int i = 0;
            while(i<s.size() && freq[s[i] - 'a'] != 0) i++;
            if(i == s.size()) cnt++;
        }

        return cnt;
    }
};