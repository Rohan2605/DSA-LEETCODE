class Solution {
public:
    string defangIPaddr(string address) {
        string ans;

        for(char c: address){
            if(c != '.') ans += c;
            else ans = ans + "[.]";
        }

        return ans;

    }
};