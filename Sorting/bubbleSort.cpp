// Bubble sort 

#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}

int main(){
    vector<int> arr = {1,5,3,2,4};
    bubble_sort(arr);
    return 0;
}