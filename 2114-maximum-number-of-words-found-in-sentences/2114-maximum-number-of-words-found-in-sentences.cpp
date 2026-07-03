class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt = 0;
        for(string s: sentences){
            int i=0;
            int temp = 0;
            for(int j=0; j<s.size(); j++){
                while(i<sentences.size() && s[j] != ' ') i++;
                if(s[j] == ' ') temp++;
                cnt = max(cnt, temp+1);
            }
        }

        return cnt;
    }
};