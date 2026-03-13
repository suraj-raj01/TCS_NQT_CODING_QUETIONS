// anagrams
// Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

#include<iostream>
#include<string.h>
using namespace std;

bool checkAnagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    
    int freq[26] = {0};

    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'A']++;
    }
    for(int i=0; i<s2.length(); i++){
        freq[s2[i] - 'A']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
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