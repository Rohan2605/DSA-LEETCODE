class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dist1 = abs(z-x);
        int dist2 = abs(z-y);

        return dist1 == dist2? 0: (dist1>dist2)? 2:1;
    }
};