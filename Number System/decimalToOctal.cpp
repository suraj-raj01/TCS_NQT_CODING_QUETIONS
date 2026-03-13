// WAP to convert decimal number to octal number;

#include<iostream>
using namespace std;

int decimal_to_octal(int n){
    if(n==0){
        return n;
    }
    int decimal = n;
    string octal = "";
    while(decimal>0){
        int rem = decimal%8;
        octal = to_string(rem) + octal;
        decimal /= 8;
    }
    return stoi(octal);
}

int main(){
    int n;
    cin>>n;
    cout<<decimal_to_octal(n);
    return 0;
}