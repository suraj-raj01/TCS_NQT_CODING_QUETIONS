// Given an array of integers, rotating array of elements by k elements either left or right.

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int> &arr, int k, string direction){
    int n = arr.size();
    if(n==0 || k==0) return arr;
    k = k%n; 
    if(direction=="right"){
        reverseArray(arr,0,n-1);
        reverseArray(arr,0,k-1);
        reverseArray(arr,k,n-1);
    }else if(direction=="left"){
        reverseArray(arr,0,k-1);
        reverseArray(arr,k,n-1);
        reverseArray(arr,0,n-1);
    }
    return arr;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k=2;
    string direction = "left";
    vector<int> result = rotateArray(nums,k,direction);

    for(auto val:result){
        cout<<val<<" ";
    }
    return 0;
}