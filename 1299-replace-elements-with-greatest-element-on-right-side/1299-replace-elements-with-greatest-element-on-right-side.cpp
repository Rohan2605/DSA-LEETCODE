class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = -1;
        int i = arr.size()-1;

        while(i>=0){
            int temp = arr[i];
            arr[i] = rightMax;
            rightMax = max(rightMax, temp);
            i--;
        }
        return arr;
    }
};