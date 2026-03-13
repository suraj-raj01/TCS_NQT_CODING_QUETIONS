// WAP to find ASCII value of a character

#include<iostream>
using namespace std;

void findASCII(char c){
    cout<<int(c);
}

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    findASCII(ch);
    return 0;
}