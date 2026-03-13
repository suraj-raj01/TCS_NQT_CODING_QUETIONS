// Quick Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int pivotIndex = partition(arr,low,high);
        quick_sort(arr,low,pivotIndex-1);
        quick_sort(arr,pivotIndex+1,high);
    }
}


int main(){
    vector<int> arr = {1,5,3,2,4};
    quick_sort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}