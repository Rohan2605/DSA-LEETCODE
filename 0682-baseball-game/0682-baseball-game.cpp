class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> ops;

        for(int i=0; i<op.size(); i++){
            if (isdigit(op[i][0]) || op[i][0] == '-'){
                ops.push_back(stoi(op[i])); 
            }            
            else if(op[i] == "C") ops.pop_back();
            else if(op[i] == "D") ops.push_back(2 * (ops.back()));
            else if(op[i] == "+") {
                ops.push_back(ops.back() + ops[ops.size()-2]);
            }
        }

        for(int x: ops){
            cout<<x<<" ";
        }

        int sum = 0;
        for(int i=0; i<ops.size(); i++){
            sum += ops[i];
        }

        return sum;
    }
};