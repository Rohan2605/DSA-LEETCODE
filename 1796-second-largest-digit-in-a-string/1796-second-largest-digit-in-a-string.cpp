class Solution {
public:
    int secondHighest(string s) {
        int maxx = -1, secMax = -1;
        for(char x: s){
            if(isdigit(x)){
                int num = x-'0';
                if(num>maxx){
                    secMax = maxx;
                    maxx = num;
                }
                else if(num>secMax && num != maxx){
                    secMax = num;
                }
            }
        }
        return secMax;
    }
};