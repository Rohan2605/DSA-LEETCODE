class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n= s.size();
        vector<int> freq(27,0);

        for(int i=0; i<n; i++){
            freq[s[i]-'a'] = i;
        }

        for(int i=0; i<n; i++){
            freq[t[i]-'a'] = abs(freq[t[i]-'a'] - i);
        }

        int ans = 0;
        for(int i=0; i<27; i++){
            ans += freq[i];
        }

        return ans;
    }
};