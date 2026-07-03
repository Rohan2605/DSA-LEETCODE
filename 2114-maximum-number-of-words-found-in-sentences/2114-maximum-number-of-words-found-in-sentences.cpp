class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt = 0;

        for(string &s: sentences){
            int words = 1 + count(s.begin(), s.end(), ' ');
            cnt = max(cnt, words);
        }

        return cnt;
    }
};