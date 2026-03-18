// anagrams
// Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

bool checkAnagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    
    int freq[s1.length()] = {0};

    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'A']++;
    }
    for(int i=0; i<s2.length(); i++){
        freq[s2[i] - 'A']--;
    }

    for(int i=0; i<s1.length(); i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

bool checkAnagrams(string s1, string s2){
    // check length is equal or not.
    if(s1.length()!=s2.length()){
        return false;
    }
    // if case-insensitive then
    string str1 = "";
    string str2 = "";
    for(int i=0; i<s1.length(); i++){
        str1 += tolower(s1[i]);
        str2 += tolower(s2[i]);
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    return str1==str2;
}

int main(){
    string s1 = "ADCB";
    string s2 = "ABCD";
    if(checkAnagram(s1,s2)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}