// Check if the number is an abundant number or not
// Problem Statement: Check if the number is an abundant number or not.

#include<iostream>
using namespace std;

class Solution{
public:
    bool isAbundantNumber(int n){
        int sum=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum += i;
            }
        }
        if(sum>n){
            return true;
        }
        return false;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    if(obj.isAbundantNumber(n)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}
