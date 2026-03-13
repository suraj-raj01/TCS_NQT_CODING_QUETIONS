// Write a program to check string is palindrome or not.

#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left<right){
        if(toupper(s[left]) != toupper(s[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int result = checkPalindrome(s);
    if(result){
        cout<<"PALINDROME."<<endl;
    }
    else{
        cout<<"NOT PALINDROME."<<endl;
    }
    return 0;
}