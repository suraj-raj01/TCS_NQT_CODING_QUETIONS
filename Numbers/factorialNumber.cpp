// Factorial of a Number : Iterative and Recursive
// Problem Statement: Given a number X,  print its factorial.

#include<iostream>
using namespace std;

int findFactorial(int n){
    int fact=1;
    while(n>=1){
        fact*=n;
        n--;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number to find factorial : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" : "<<findFactorial(n);
    return 0;
}