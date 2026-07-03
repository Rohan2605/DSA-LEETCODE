class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatches = 0;
        while(n){
            if(n==1) return totalMatches; 
            totalMatches += n/2;
            if(n%2 == 0) n = n/2;
            else n = ((n-1)/2)+1;
        }

        return totalMatches;
    }
};