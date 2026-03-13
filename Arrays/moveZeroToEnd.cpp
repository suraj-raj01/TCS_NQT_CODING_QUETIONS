// remove zero to end of an array

#include<iostream>
#include<vector>
using namespace std;

void moveZeroToEnd(vector<int> &arr){
    int j=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    vector<int> arr = {1,2,0,3,0,5,0,7,0};
    moveZeroToEnd(arr);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}