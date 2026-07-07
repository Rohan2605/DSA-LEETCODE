class Solution {
public:
    long long sumAndMultiply(int n) {
        long long newN = 0;
        long long sum = 0;
        string s = "";

        while(n){
            int digit = n%10;
            if(digit) s += to_string(digit);
            sum += digit;
            n /= 10;
        }
        
        reverse(s.begin(), s.end());
        if(!s.empty()) newN = stoll(s);
        return sum * newN;
    }
};