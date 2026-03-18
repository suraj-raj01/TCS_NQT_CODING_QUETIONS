// WAP to find sum of unique number

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int sum_of_uniuque(vector<int> arr){
    set<int>st(arr.begin(),arr.end());
    int sum=0;
    for(auto i:st){
        sum+=i;
    }
    return sum;
}

int main(){
    vector<int> arr = {1,3,2,3,2,4};
    cout<<sum_of_uniuque(arr);
    return 0;
}