// Replace all the 0’s with 1 in a given integer
// Problem Statement: You are given an integer. Your task is to replace all the zeros in the integer with ones.

#include<iostream>
using namespace std;

int replaceZeroWithOne(int n){
    if(n==0){
        return 1;
    }

    int reversed = 0;

    while(n>0){
        int digits = n%10;
        if(digits==0) digits = 1;
        reversed = reversed*10+digits;
        n/=10;
    }
    int result = 0;
    while(reversed>0){
        result = result*10+ (reversed%10);
        reversed/=10;
    }
    return result;
}

int replaceZeroWithOnes(int n){
    string str = to_string(n);
    for(int i=0; i<str.length(); i++){
        if(str[i]=='0'){
            str[i] = '1';
        }
    }
    return stoi(str);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<replaceZeroWithOne(n)<<endl;
    cout<<replaceZeroWithOnes(n);
    return 0;
}