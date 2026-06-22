class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;

        for(char c: text){
            freq[c]++;
        }

        int cnt=INT_MAX;

        string target = "balloon";
        for(int i=0; i<target.size(); i++){
            if(freq.count(target[i])){
                if(target[i]=='l' || target[i]=='o') cnt = min((freq[target[i]])/2, cnt);
                cnt = min(freq[target[i]], cnt);
            }
            else cnt = 0;

        }

        return cnt == INT_MAX ? 0 : cnt;
    }
};