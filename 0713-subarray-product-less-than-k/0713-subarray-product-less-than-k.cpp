class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long subarrayCnt = 0; 
        int i = 0;
        long long prod = 1;

        if(k<=1) return 0;
        
        for(int j=0; j<nums.size(); j++){
            prod *= nums[j];

            while(prod>=k){
                prod /= nums[i];
                i++;
            }

            subarrayCnt += (j-i+1);
                
        }
        return subarrayCnt;
    }
};