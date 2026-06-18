class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        //prefix and suffix sum storage
        vector<int> prefixProd(n), suffixProd(n);

        prefixProd[0] = nums[0];
        for(int i=1; i<n; i++){
            prefixProd[i]= prefixProd[i-1] * nums[i];
        }

        suffixProd[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffixProd[i]= suffixProd[i+1] * nums[i];
        }

        for(int j=0; j<n; j++){
            if(j == 0) nums[j]=suffixProd[1];
            else if(j == n-1) nums[j] = prefixProd[n-2];
            else nums[j] = prefixProd[j-1] * suffixProd[j+1];
        }

        return nums;

        //there is better solution with O(1) storage
    }
};