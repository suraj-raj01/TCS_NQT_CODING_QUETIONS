// Change case of each character in a string
// Problem Statement: Write a program to change the case (lower to upper and upper to lower cases) of each character of a given string.

#include<iostream>
#include<string.h>
using namespace std;

string changeCaseOfEachCharacter(string &s){
    for(int i=0; i<s.length(); i++){
        int ascii = (int)s[i];
        if(ascii>=65 && ascii<=92){
            s[i] = ((char)ascii+32);
        }else if(ascii>=97 && ascii<=122){
            s[i] = ((char)ascii-32);
        }
    }
    return s;
}

int main(){
    string s = "hello this is suraj rajak";
    cout<<changeCaseOfEachCharacter(s);
    return 0;
}