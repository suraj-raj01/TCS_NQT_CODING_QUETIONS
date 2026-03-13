// WAP to print nth term of fibonacci series.

#include<iostream>
using namespace std;

// using recursion
int fibonacciNthTerm(int n){
    if(n<=1){
        return n;
    }
    return fibonacciNthTerm(n-1) + fibonacciNthTerm(n-2);
}

// using loop
int fibonaccinth_term(int n){
    if(n<=1) return n;

    int a=0,b=1,c;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n;
    cout<<"enter the nth term : ";  // 0 1 1 2 3 5
    cin>>n;
    cout<<fibonacciNthTerm(n)<<endl;
    cout<<fibonaccinth_term(n);
    return 0;
}