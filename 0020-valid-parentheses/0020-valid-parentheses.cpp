class Solution {
public:
    bool isValid(string s) {
        stack<char> vp;

        for(auto x: s){
            if(x == '(' || x == '{' || x == '[') vp.push(x);

            else if(vp.empty()) return false;
            else if(vp.top()=='(' && x == ')') vp.pop();
            else if(vp.top()=='{' && x == '}') vp.pop();
            else if(vp.top()=='[' && x == ']') vp.pop();
            else return false;
        }

        if(vp.empty()) return true;
        return false;
    }
};