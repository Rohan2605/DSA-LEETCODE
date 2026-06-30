class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> f(26,0);
        for(char c: s){
            f[c-'a']++;
        }

        int vow = 0;
        int cons = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                vow = max(vow, f[s[i]-'a']);
            }
            else{
                cons = max(cons, f[s[i]-'a']);
            }
        }

        return vow + cons;
    }
};