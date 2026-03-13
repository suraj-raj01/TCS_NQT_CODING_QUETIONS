// WAP to covert octal to binary number

#include<iostream>
#include<cmath>
using namespace std;

void decimal_to_binary(int n){
    if(n==0){
        return;
    }
    decimal_to_binary(n/2);
    cout<<n%2;
}

void octal_to_binary(int n){
    int i=0;
    int decimal = 0;
    int octal = n;
    while(octal>0){
        int rem = octal%10;
        decimal += rem*pow(8,i); 
        i++;
        octal /= 10;
    }
    decimal_to_binary(decimal);
}

int main(){
    int n;
    cin>>n;
    octal_to_binary(n);
    return 0;
}