class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        
        int i=0, j=0;

        while(i<n &&  j<n){
            if(arr[i]==0){
                ans[j] = arr[i];
                if(j+1<n)ans[++j] = arr[i];
            }
            else{
                ans[j] = arr[i];
            }
            i++; j++;
        }
        arr = ans;
    }
};