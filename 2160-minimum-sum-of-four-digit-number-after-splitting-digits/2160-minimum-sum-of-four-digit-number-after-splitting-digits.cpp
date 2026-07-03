class Solution {
public:
    int minimumSum(int num) {
        vector<int> storage;
        while(num){
            storage.push_back(num%10);
            num /= 10;
        }

        sort(storage.begin(), storage.end());

        int new1 = storage[0]*10 + storage[3];
        int new2 = storage[1]*10 + storage[2];

        return new2 + new1;                 
    }
};