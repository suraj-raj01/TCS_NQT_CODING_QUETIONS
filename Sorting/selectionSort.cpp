// selection sort

#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int mini=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,5,3,2,4};
    selection_sort(arr);
    return 0;
}