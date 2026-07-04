class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for(vector<string> x: items){
            if(ruleKey == "color"){
                if(ruleValue == x[1]) cnt++;
            }
            else if(ruleKey == "type"){
                if(ruleValue == x[0]) cnt++;
            }
            else {
                if(ruleValue == x[2]) cnt++;
            }
        }

        return cnt;
    }
};