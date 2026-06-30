class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26,0);
        int cnt = 0;
        
        for(char c: s){
            if(freq[c-'a']==0){
                freq[c-'a']++;
                cnt++;
            }
        }
        return cnt;
    }
};