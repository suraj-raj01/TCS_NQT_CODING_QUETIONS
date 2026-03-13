// Sum of numbers in a string

#include<iostream>
#include<string.h>
using namespace std;

int sumOfNumbers(string s){
    int sum=0;
    string temp="";
    for(char c:s){
        if(isdigit(c)){
            temp+=c;
        }else{
            if(!temp.empty()){
                sum += stoi(temp);
                temp="";
            }
        }
    }
    if(!temp.empty()){
        sum += stoi(temp);
    }
    return sum;
}

int main(){
    string s = "12fd12re6fdgfg20";
    cout<<"Sum of numbers in a string : "<<sumOfNumbers(s);
    return 0;
}