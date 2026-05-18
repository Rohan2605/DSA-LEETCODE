class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char> st;

        // for(auto x: s){
        //     if(!st.empty() && st.top() == x) st.pop();
        //     else st.push(x);
        // }

    string st;

    for(char x: s){
        if(!st.empty() && st.back() == x) st.pop_back();
        else st.push_back(x);        
    }

    return st;
    }
};