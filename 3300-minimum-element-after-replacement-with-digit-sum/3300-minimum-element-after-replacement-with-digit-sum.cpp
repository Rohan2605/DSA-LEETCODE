class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int &x: nums){
            int sum = 0;
            while(x){
                sum += x%10;
                x /= 10;
            }
            x = sum;
        }

        return *min_element(nums.begin(), nums.end());
    }
};