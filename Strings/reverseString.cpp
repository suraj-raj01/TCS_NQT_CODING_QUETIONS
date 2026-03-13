// WAP to reverse a string.

#include<iostream>
#include<string.h>
using namespace std;

string revString(string s){
    string rev = "";
    int n = s.length()-1;
    while(n>=0){
        rev.push_back(s[n]);
        n--;
    }
    return rev;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"Reversed String : "<<revString(s);
}