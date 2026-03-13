// Check if the given number is Harshad(Or Niven) Number
// Problem Statement: Check if the number is a Harshad(or Niven) number or not.

#include<iostream>
using namespace std;
class Solution{
public:
bool isNivenNumber(int n){
    int sum = 0;
    int temp = n;
    while(temp>0){
        int rem = temp%10;
        sum += rem;
        temp /= 10;
    }
    if(n%sum==0){
        return true;
    }
    return false;
}
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    if(obj.isNivenNumber(n)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
}