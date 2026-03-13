// WAP to convert octal number to Decimal

#include<iostream>
#include<cmath>
using namespace std;

int octal_to_decimal(int octal){
    int i=0;
    int decimal = 0;
    while(octal>0){
        int rem = octal%10;
        decimal += rem*pow(8,i); 
        i++;
        octal /= 10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter the octal number : ";
    cin>>n;
    cout<<octal_to_decimal(n);
    return 0;
}