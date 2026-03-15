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

string revStr(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"Reversed String : "<<revString(s)<<endl;
    cout<<"Reversed String : "<<revStr(s);
}