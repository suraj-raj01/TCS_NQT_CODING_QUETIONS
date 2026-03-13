// Find LCM of two numbers
// Problem Statement: Find the LCM of two numbers.

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int findLCM(int a, int b){
    // LCM FORMULA -> LCM = (a*b)/GCD
    int g = gcd(a,b);
    int lcm = (a*b)/g;
    return lcm;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<findLCM(a,b);
    return 0;
}