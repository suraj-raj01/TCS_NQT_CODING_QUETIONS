// WAP to print sum of ap series.

#include<iostream>
using namespace std;

float sumOf_AP_Series(float a,float d, float n){
    float sum = (n * (2.0 * a + (n - 1) * d))/2.0;
    return (float)sum;
}

int main(){
    float a = 2.0, d = 5.0, n = 8.0;
    cout<<"Sum of AP Series : "<<sumOf_AP_Series(a,d,n);
    return 0;
}