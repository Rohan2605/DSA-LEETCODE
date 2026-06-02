class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1) return cost[0];
        else if(cost.size() == 2) return cost[0] + cost[1];

        priority_queue<int> pq(cost.begin(),cost.end());
        int ans = 0, cnt = 1;

        while(pq.size()>0){
            if(cnt == 3){
                cnt = 0;
            }
            else{
                int x = pq.top(); 
                ans += x;
            }
            pq.pop();
            cnt++;
        }
        return ans;
    }
};