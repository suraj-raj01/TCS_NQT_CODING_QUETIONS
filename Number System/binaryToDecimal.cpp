//  WAP to convert binary number to digit.

#include<iostream>
using namespace std;

// using built-in function
int binaryToDecimal(int s){
    string str = to_string(s);
    return stoi(str,0,2);
}

// using loop
int binary_to_decimal(int n){
    int decimal = 0;
    int base = 1;
    while(n>0){
        int rem = n%10;
        decimal += rem * base;
        base *= 2;
        n /= 10;
    }
    return decimal;
}

int main(){
    int binary = 1111;
    cout<<binaryToDecimal(binary)<<endl;
    int n;
    cin>>n;
    cout<<binary_to_decimal(n);
    return 0;
}