class Solution {
public:
    int reverseInt(int num){
        int ans=0;
        while(num>0){
            int digits = num % 10;
            ans = ans*10 + digits;
            num = num/10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int ans = reverseInt(num);
        cout<<ans<<endl;
        int revAns = reverseInt(ans);
        cout<<revAns<<endl;
        return num==revAns ? true:false;
    }
};