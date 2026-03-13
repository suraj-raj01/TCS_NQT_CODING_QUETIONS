// Count the number of words in a given string
// Problem Statement: Write a program to count the number of words in a given string.

#include<iostream>
#include<string.h>
using namespace std;

int countWord(string s){
    int count=0;
    if(s[0]==' '){
        count--;
    }
    if(s[s.length()-1]==' '){
        count--;
    }
    for(char c:s){
        if(c==' '){
            count++;
        }
    }
    return count+1;
}

int main(){
    string s = " Hello guys how are you all? ";
    cout<<"There are "<<countWord(s)<<" words in this sentence";
    return 0;
}