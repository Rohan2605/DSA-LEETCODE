class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++)
        {
            vector<int> tempV;
            for(int j = 0; j <= i; j++)
            {
                if(j!=0 && j!=i){
                    tempV.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
                else tempV.push_back(1);
            }
            ans.push_back(tempV);
        }
        return ans;
    }
};