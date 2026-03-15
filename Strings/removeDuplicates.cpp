// Remove All Duplicates from a String
// Problem Statement: Given a String remove all the duplicate characters from the given String.

#include<iostream>
#include<string.h>
#include<unordered_map>
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

string remove_duplicates(string s){
    unordered_map<int, int> map;
    for(int i=0; i<s.length(); i++){
        map[s[i]]++;
    }
    string res="";
    for(auto val:map){
        res+=val.first;
    }
    return res;
}

int main(){
    string s = "banana";
    cout<<"After removing duplicate : "<<remove_duplicate(s)<<endl;
    cout<<"After removing duplicate : "<<remove_duplicates(s);
    return 0;
}