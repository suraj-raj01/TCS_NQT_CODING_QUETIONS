// WAP to print length of a string without using any built-in functions.

#include<iostream>
using namespace std;

int strLength(string str){
    int length=0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main(){
    string s = "Hello World";
    cout<<"Length of string : "<<strLength(s);
    return 0;
}