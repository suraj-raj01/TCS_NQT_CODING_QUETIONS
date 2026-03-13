// Remove All Duplicates from a String
// Problem Statement: Given a String remove all the duplicate characters from the given String.

#include<iostream>
#include<string.h>
using namespace std;

string remove_duplicate(string s){
    int n = s.length();
    bool seen[26] = {false};
    if(n<=1){
        return s;
    }
    string result = "";

    for(char ch:s){
        if(!seen[ch-'a']){
            seen[ch-'a'] = true;
            result += ch;
        }
    }
    return result;
}

int main(){
    string s = "banana";
    cout<<"After removing duplicate : "<<remove_duplicate(s);
    return 0;
}