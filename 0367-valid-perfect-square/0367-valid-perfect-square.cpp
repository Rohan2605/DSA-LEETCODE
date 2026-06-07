class Solution {
public:
    bool isPerfectSquare(int num) {
        auto x = sqrt(num);
        return (floor(x)==x)?true: false;
    }
};