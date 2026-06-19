class Solution {
public:

    int canEatInTime(vector<int>& piles, int h, int k){
        long long hours = 0;
        for(int pile: piles){
            hours += pile/k;
            if(pile%k != 0) hours++;
        }
        if(hours>h) return false;
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        if(piles.size() == h) return *max_element(piles.begin(), piles.end());

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(canEatInTime(piles, h, mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return ans;
    }
};