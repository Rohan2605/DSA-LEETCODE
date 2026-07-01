class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int x: nums){
            int sum = 0;
            while(x){
                sum += x%10;
                x /= 10;
            }
            if(sum < mini) mini = sum;
        }

        return mini;
    }
};