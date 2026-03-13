// WAP to remove space from a string.

#include<iostream>
#include<string.h>
using namespace std;

string removeSpace(string s){
    string ans = "";
    for(char c:s){
        if(c==' '){
            continue;
        }
        ans += c;
    }
    return ans;
}

int main(){
    string s = "After removing space ";
    cout<<"After removing space : "<<removeSpace(s);
    return 0;
}