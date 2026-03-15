// WAP to find ASCII value of a character

#include<iostream>
using namespace std;

int findASCII(char c){
    return int(c);
}

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<findASCII(ch);
    return 0;
}