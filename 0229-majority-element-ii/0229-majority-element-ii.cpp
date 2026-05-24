class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int cand1=0, cand2=0;
        int n = nums.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            if(cnt1==0 && nums[i] != cand2){
                cnt1++;
                cand1 = nums[i];
            }
            else if(cnt2==0 && nums[i] != cand1){
                cnt2++;
                cand2 = nums[i];
            }
            else if(cand1==nums[i]) cnt1++;
            else if(cand2==nums[i]) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        int threshold = n/3;

        cnt1=0;
        cnt2=0;
        for(int x: nums){
            if(x == cand1) cnt1++;
            else if(x == cand2) cnt2++;
        }

        if(cnt1>threshold) result.push_back(cand1);
        if(cnt2>threshold) result.push_back(cand2);

        return result;
    }
};