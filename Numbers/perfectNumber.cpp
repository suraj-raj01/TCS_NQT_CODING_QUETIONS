// Check whether a number is Perfect Number or not
// Problem Statement: Write a program to find whether a number is a perfect number or not.

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).

#include<iostream>
using namespace std;

bool isPerfectNumber(int n){
    int num = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            num += i;
        }
    }
    return num==n;
}

int main(){
    int n;
    cin>>n;
    if(isPerfectNumber(n)){
        cout<<"Perfect Number";
    }else{
        cout<<"Not Perfect Number";
    }
    return 0;
}