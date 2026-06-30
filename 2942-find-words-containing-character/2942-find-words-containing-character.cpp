class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        int i = 0;
        for(string s: words){
            if(s.contains(x)) ans.push_back(i);
            i++;
        } 

        return ans;
    }
};