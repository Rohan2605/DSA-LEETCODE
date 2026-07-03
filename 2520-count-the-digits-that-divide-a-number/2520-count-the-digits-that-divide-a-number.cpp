class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int number = num;
        while(num){
            int digit = num % 10;
            if(number % digit == 0) cnt++;
            num /= 10;
        }
        return cnt;
    }
};