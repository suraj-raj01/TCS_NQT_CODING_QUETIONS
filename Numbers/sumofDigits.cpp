// WAP to find sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    cout <<"Sum of digits : "<<sumOfDigits(num);
    return 0;
}