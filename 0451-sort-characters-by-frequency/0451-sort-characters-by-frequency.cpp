class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256, 0);
        string ans="";

        for(char c: s){
            freq[c]++;
        }

        vector<pair<int, char>> freqPair;
        for(int i=0; i<256; i++){
            freqPair.push_back({freq[i], i});
        }

        sort(freqPair.begin(), freqPair.end(), greater<pair<int, char>>());

        for(int i=0; i<freqPair.size(); i++){
            if(freqPair[i].first == 0) continue;

            while(freqPair[i].first>0) {
                ans += freqPair[i].second;
                freqPair[i].first--;
            }
        }
        return ans;
    }
};