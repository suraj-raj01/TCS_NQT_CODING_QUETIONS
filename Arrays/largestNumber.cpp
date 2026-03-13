#include<iostream>
#include<vector>
using namespace std;

int largestNumber(vector<int>arr){
    int num = INT32_MIN;
    
    for(int i=0; i<arr.size(); i++){
        if(num<arr[i]){
            num = arr[i];
        }
    }
    return num;
}

int secondLargestNumber(vector<int>arr){
    int largest = INT32_MIN;
    int secondLargest = INT32_MIN;

    for(int i=0; i<arr.size(); i++){
        if(largest<arr[i]){
            secondLargest = largest;
            largest = arr[i];
            if(secondLargest<arr[i] && largest>arr[i]){
                secondLargest = arr[i];
            }
        }
    }
    return secondLargest;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout<<"Largest Number : "<<largestNumber(arr)<<endl;
    cout<<"Second Largest Number : "<<secondLargestNumber(arr);
    return 0;
}