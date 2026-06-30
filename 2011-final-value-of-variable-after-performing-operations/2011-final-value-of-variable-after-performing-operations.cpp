class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        
        for(string s: operations){
            if(s == "--X" || s == "X--") val -= 1;
            else val += 1;
        }

        return val;
    }
};