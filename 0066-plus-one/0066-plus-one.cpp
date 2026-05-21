class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i>=0; i--){
            
            // if digit is 0-9
            if(digits[i] != 9){
                digits[i] += 1;
                return digits;
            }

            // if digit is 9
            digits[i] = 0;
        }

        // if all the digits are 9, we need to add 1 in the start
        digits.insert(digits.begin(), 1);
        return digits;
    }
};