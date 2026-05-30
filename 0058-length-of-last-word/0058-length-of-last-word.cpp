class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = s.find_first_not_of(' ');
        int end = s.find_last_not_of(' ');
        string x = s.substr(start, end-start+1);
        cout<<s<<endl;
        int cnt = 0;
        for(int i=x.size()-1; i>=0; i--){
            if(x[i] == ' ') break;
            cnt++;
        }
        return cnt;
    }
};