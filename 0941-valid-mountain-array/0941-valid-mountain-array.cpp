class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i=0;

        // walk up the mountain
        while(i+1<n && arr[i]<arr[i+1]) i++;

        // the top is not start or end as then it cannot be a mountain
        if(i==0 || i==n-1) return false;

        // walk down the mountain
        while(i+1<n && arr[i]>arr[i+1]) i++;

        // if i is equal to n-1 then a mountain array else not
        return i==n-1;
    }
};