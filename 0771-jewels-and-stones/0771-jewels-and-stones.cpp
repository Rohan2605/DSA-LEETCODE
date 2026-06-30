class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> f(256,0);
        for(char c: jewels){
            f[c]++;
        }

        int cnt=0;
        for(char c: stones){
            if(f[c]) cnt++;
        }

        return cnt;
    }
};