// Convert decimal to binary number.

#include<iostream>
#include<vector>
using namespace std;

void decimal_to_binary(int n){
    if(n==0){
        return;
    }
    decimal_to_binary(n/2);
    cout<<n%2;
}

int main(){
    int n;
    cout<<"enter the decimal number : ";
    cin>>n;
    decimal_to_binary(n);
    return 0;
}