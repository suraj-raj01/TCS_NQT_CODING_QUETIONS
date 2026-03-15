// Two sum : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<iostream>
#include<unordered_map>
using namespace std;
#include<vector>

vector<int> twoSum(vector<int> &arr, int target){
    unordered_map<int,int>map;
    for(int i=0; i<arr.size(); i++){
        int complement = target-arr[i];
        if(map.count(complement)){
            return {map[complement],i};
        }
        map[arr[i]] = i;
    }
    return {};
}

int main(){
    vector<int>arr = {1,5,6,9};
    int target = 14;
    vector<int>res = twoSum(arr,target);
    for(int val:res){
        cout<<val<<" ";
    }
    return 0;
}