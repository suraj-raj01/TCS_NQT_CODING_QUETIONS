// Write a program to sort characters in a string
// Problem Statement:  Write a program to sort characters (numbers and punctuation symbols are not included) in a given string.

#include<iostream>
#include<algorithm>
using namespace std;

//bruit force algorithm (bubble sort)
void sortChar(string s){
    int n = s.length();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    for(char c:s){
        cout<<c<<"";
    }
}

// optimal solution
string sort_character(string s){
    sort(s.begin(),s.end());
    return s;
}

int main(){
    string s;
    cin>>s;
    cout<<sort_character(s)<<endl;
    sortChar(s);
    return 0;
}