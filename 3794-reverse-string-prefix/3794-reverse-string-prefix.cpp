class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;
        if(k == s.size()){
            reverse(s.begin(), s.end());
            return s;
        }

        int j=0;
        for(int i=0; i<s.size(); i++){
            while(j<k) j++;
            reverse(s.begin()+i, s.begin()+j);
            break;
        }

        return s;
    }
};