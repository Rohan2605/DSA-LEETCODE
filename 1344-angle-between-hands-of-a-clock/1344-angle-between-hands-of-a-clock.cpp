class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourPos = hour + minutes/60.0;
        double minPos = minutes/5.0;

        double angle = (abs(hourPos - minPos))*30;
        return (angle>180)? 360-angle : angle;
    }
};