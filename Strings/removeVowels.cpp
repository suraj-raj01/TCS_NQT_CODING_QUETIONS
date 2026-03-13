// WAP to remove all the vowels from a string.

#include<iostream>
using namespace std;
#include<string.h>

string removeVowels(string s){
    string result = "";
    for(char ch:s){
        char lower = tolower(ch);
        if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'){
            continue;
        }
        result += ch;
    }
    return result;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"After removing the vowels : "<<removeVowels(s);
    return 0;
}