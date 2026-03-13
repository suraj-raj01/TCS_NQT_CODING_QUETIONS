// Print all the duplicates in the string
// Problem Statement: Given a string of characters from a to z. Print the duplicate characters(which are occurring more than once) in the given string with their occurrences count.

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void printDuplicates(string s){
    int n = s.length();
    vector<int> freq(26,0);

    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i]>1){
            cout<<char(i+'a')<<" : "<<freq[i]<<"\n";
        }
    }
}

int main(){
    string s = "khaobanaokela";
    cout<<"Input : "<<s<<endl;
    printDuplicates(s);
    return 0;
}