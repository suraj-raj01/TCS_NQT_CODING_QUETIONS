// Find GCD of two numbers
// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
using namespace std;
// greatest common divisor (GCD)
int find_gcd(int a, int b){
    if(b==0){
        return a;
    }
    return find_gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<find_gcd(a,b);
    return 0;
}