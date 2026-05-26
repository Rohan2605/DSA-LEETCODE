class Solution {
public:
    bool isPalindrome(string s) {

        // if(s.size() == 0) return true;

        string s2;
        for(auto x:s){
            if(isalnum(x)){
                s2 += tolower(x);
                // cout<<x<<endl;
                // cout<<s2<<endl;
            }
        }

        string s3 = s2;

        reverse(s2.begin(), s2.end());
        // cout<<s2<<endl;
        if(s3 == s2 ) return true;
        return false;
    }
};