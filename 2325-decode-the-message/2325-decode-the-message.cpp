class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> freq(26, ' ');
        char ch = 'a';
        for(char c: key){
            if(c != ' ' && freq[c-'a'] == ' '){
                freq[c-'a'] = ch++;
            }
            
        }

        string ans;
        for(char x: message){
            if(x == ' ') ans += ' ';
            else ans += freq[x-'a'];
        }

        return ans;
    }
};