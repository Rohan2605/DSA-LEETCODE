class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temp(2,0);
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;

        temp[0] = kelvin;
        temp[1] = fahrenheit;

        return temp;
    }
};