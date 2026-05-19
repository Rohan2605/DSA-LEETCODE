class Solution {
public:
    bool isPalindrome(int x) {
        long y = x;
        long z=0;

        if(x>0){
            while(y){
                z = z*10 + y%10;
                y = y/10;
            }
        }
        else false;

        return x==z;
    }
};