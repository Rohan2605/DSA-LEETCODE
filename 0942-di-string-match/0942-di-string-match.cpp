class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int x = n;
        int i = 0;
        vector<int> ans;

        // for(int i=0; i<n-1; i++){
        //     if(s[i]=='I'){
        //         ans.push_back(n-x);
        //         x--;
        //     }
        //     else if(s[i] == 'D'){
        //         ans.push_back(n-i);
        //     }
        // }

        for(int j = 0; j<s.size(); j++){
            if(s[j]=='I'){
                ans.push_back(n-x);
                x--;
            }
            else if(s[j] == 'D'){
                ans.push_back(n-i);
                i++;
            }
        }
        ans.push_back(n-i);
        return ans;
    }
};