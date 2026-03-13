// Calculate the Area of the Circle
// Problem Statement: Given the radius of the circle, calculate the area of the circle.

#include<iostream>
using namespace std;

class Solution{
    public:
    double area_of_circle(int area){
        double pi = 3.14;
        return pi*area*area;
    }
};

int main(){
    int n;
    cout<<"Enter the area of circle : ";
    cin>>n;
    Solution obj;
    cout<<"Area of circle : "<<obj.area_of_circle(n);
    return 0;
}