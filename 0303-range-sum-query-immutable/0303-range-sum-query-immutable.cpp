class NumArray {
    vector<int> arr;
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        arr = nums;
        int runSum = 0;
        for(int i=0; i<nums.size(); i++){
            runSum += nums[i];
            prefixSum.push_back(runSum);
        }
    }
    
    int sumRange(int left, int right) {

        int ans = 0;
        if((left-1)>=0) ans = prefixSum[right] - prefixSum[left-1];
        else ans = prefixSum[right];
        return ans;

        // int sum=0;
        // for(int i=left; i<=right; i++){
        //     sum += arr[i];
        // }


        // right + 1 to define the range till right (as this type of functions don't include rightmost values)
        // return accumulate(arr.begin()+left, arr.begin()+right+1, 0); 



    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */