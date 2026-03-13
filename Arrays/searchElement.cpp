// WAP to search element in an array

#include<iostream>
#include<vector>
using namespace std;

bool searchElement(vector<int>arr,int n){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==n){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n;
    cout<<"Enter search number : ";
    cin>>n;
    if(searchElement(arr,n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}