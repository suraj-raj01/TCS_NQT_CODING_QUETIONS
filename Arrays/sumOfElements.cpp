// sum of array elements

#include<iostream>
using namespace std;
#include<vector>

int sumOfArray(vector<int>arr){
    int n = arr.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<"Sum of array : "<<sumOfArray(arr);
    return 0;
}