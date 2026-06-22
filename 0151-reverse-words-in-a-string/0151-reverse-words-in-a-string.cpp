class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(), s.end());
        // string word, s2;

        // stringstream ss(s);

        // while(ss>>word){
        //     reverse(word.begin(), word.end());
        //     s2 += word + " ";
        // }
        // s2.pop_back();
        // return s2;

        // string ans, word;
        // stringstream ss(s);

        // //Time complexity is O(n^2) 
        // while(ss>>word){
        //     ans = word + " " +ans ; //because of this line which does this every time
        // }

        // /* we can create a vector and push all the words in it  and then iterate it backwards O       (n)*/
        
        // ans.pop_back();
        // return ans;

        
        reverse(s.begin(), s.end());
        cout<<s;

        string ans = "";
        for(int i=0; i<s.size(); i++){
            string word="";
            while(!isspace(s[i]) && i<s.size()){
                word += s[i];
                i++;
            }
            // cout<<word;
            if(word.size()>0) {
                reverse(word.begin(), word.end());
                ans += word;
                ans += " ";
            }
        }

        ans.pop_back();

        return ans; 

    }
};