// Problem Statement: Given a 0-indexed integer array nums, find the leftmost equilibrium Index.

// An equilibrium Index is an index at which sum of elements on its left is equal to the sum of element on its right. That is, nums[0] + nums[1] + ... + nums[equilibriumIndex-1] == nums[equilibriumIndex+1] + nums[equilibriumIndex+2] + ... + nums[nums.length-1]. If equilibriumIndex == 0, the left side sum is considered to be 0. Similarly, if equilibriumIndex == nums.length - 1, the right side sum is considered to be 0.

#include<iostream>
using namespace std;

int findEquilibriumIdx(int arr[], int n){
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum+=arr[i];
    }

    int leftSum=0, rightSum=totalSum;

    for(int i=0; i<n; i++){
        rightSum-=arr[i];
        if(leftSum==rightSum){
            return i;
        }
        leftSum+=arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, -1, 8, 4};
    int n=5;
    int equilibriumidx = findEquilibriumIdx(arr, n);
    cout<<equilibriumidx<<endl;
    return 0;
}