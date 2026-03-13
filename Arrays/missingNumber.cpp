// find the missing number from array

#include<iostream>
#include<vector>
using namespace std;

int missingNumber1(vector<int>arr){
    int n = arr.size();
    int total = n*(n+1)/2;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return total-sum;
}

int missingNumber2(vector<int> arr){
    int n = arr.size();
    int xor1=0, xor2=0;

    for(int i=0; i<=n; i++){
        xor1 ^= i;
    }
    for(int i=0; i<n; i++){
        xor2 ^= arr[i];
    }
    return xor1^xor2;
}

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,8};
    cout<<"Missing Number : "<<missingNumber1(arr)<<endl;
    cout<<"Missing Number : "<<missingNumber2(arr)<<endl;
    return 0;
}
