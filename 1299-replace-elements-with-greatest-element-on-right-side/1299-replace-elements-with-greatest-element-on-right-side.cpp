class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();


        if(n<2) return {-1};
        for(int i=0; i<n; i++){
            int temp = INT_MIN;
            for(int j = i+1; j<n; j++){
                temp = max(temp, arr[j]);
            }
            arr[i] = temp;
        }
        arr[n-1] = -1;
        return arr;
    }
};