//  WAP to check a number is prime or not

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

// prime number in given range;

void primeNumbers(int i, int j){
    while(i<j){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    int isPrime = checkPrime(n);
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    primeNumbers(1,50);
    return 0;
}