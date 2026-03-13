// Insertion sort

#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr;
}

int main(){
    vector<int> arr = {1,5,3,2,4};
    vector<int> sorted_arr = insertion_sort(arr);
    for(int val:sorted_arr){
        cout<<val<<" ";
    }
    return 0;
}