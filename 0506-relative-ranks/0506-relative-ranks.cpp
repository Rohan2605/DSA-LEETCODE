class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ranks;
        int n = score.size();
        vector<int> copyScore = score;
        sort(copyScore.begin(), copyScore.end(), greater<int>());

        map<int, string> mp;

        for(int i=0; i<n; i++){
            if(i == 0) mp[copyScore[i]] = "Gold Medal";
            else if(i == 1) mp[copyScore[i]] = "Silver Medal";
            else if(i == 2) mp[copyScore[i]] = "Bronze Medal";
            else mp[copyScore[i]] = to_string(i+1);
        }

        for(int x: score){
            ranks.push_back(mp[x]);
        }

        return ranks;

    }
};