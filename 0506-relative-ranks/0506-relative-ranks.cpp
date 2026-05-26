class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ranks;
        int val;

        for(int i=0; i<score.size(); i++){
            int cnt =0;
            for(int j=0; j<score.size(); j++){
                if(i == j) continue;
                else if(score[i] - score[j] > 0) cnt++;
            }
            if(score.size()-cnt == 1) ranks.push_back("Gold Medal");
            else if(score.size()-cnt == 2) ranks.push_back("Silver Medal");
            else if(score.size()-cnt == 3) ranks.push_back("Bronze Medal");
            else {
                val = score.size()-cnt;
                ranks.push_back(to_string(val));
            }
        }
        return ranks;
    }
};