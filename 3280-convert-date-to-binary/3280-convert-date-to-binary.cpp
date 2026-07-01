class Solution {
public:

    string toBinary(int n){
        if(n==0) return "0";

        string ans;
        while(n){
            ans += (n&1) + '0';
            n>>=1;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string convertDateToBinary(string date) {
        string ans = "";
        string temp = "";
        for (int i = 0; i <= date.size(); i++) {
            if (i == date.size() || date[i] == '-') {
                ans += toBinary(stoi(temp));
                if(i!=date.size())ans += '-';
                temp = "";
            } else {
                temp += date[i];
            }
        }
        return ans;
    }
};