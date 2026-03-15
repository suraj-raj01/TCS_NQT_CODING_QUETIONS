/*
Consider that you are managing an inventory system in a warehouse. Some products are packed
in bulk quantities of 10, and these products need to be sent to a different warehouse.

Your task is to rearrange the inventory list such that all products whose quantities are 
multiple of 10 are moved to the end while ensuring that the order of the remaining products
is not disturbed.

Problem Statement:
You are given an array of integers representing product quantities. Rearrange the array
so that all multiples of 10 appear at the end of the array, while keeping the relative order
of all other elements unchanged.

----------------------------------------------------------------------------------------------

Input: 
arr = [10,12,5,40,30,7,5,9,10]
------------------------------
Output:
arr = [12,5,7,5,9,10,40,30,10]
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> inventory_management(vector<int>arr){
    int j=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%10!=0){
            swap(arr[j++],arr[i]);
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {10, 12, 5, 40, 30, 7, 5, 9, 10};
    vector<int> res = inventory_management(arr);
    cout<<"Input : [";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
        if (arr.size() - 1 != i){
            cout << ",";
        }
    }
    cout<<"]\n";

    cout<<"Output : [";
    for(int i=0;i<res.size(); i++){
        cout<<res[i];
        if(res.size()-1!=i){
            cout<<",";
        }
    }
    cout<<"]";
}