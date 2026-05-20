class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int noOfEmployees = 0;

        for(int x: hours){
            if(x>=target) noOfEmployees++;
        }
        return noOfEmployees;
    }
};