// Merge Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    vector<int> left(n1);
    vector<int> right(n2);
    for(int i=0; i<n1; i++){
        left[i] = arr[low+i];
    }
    for(int i=0; i<n2; i++){
        right[i] = arr[mid+1+i];
    }
    int i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    vector<int> arr = {1,5,3,2,4};
    merge_sort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}