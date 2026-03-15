// WAP to reverse an array.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,8,7,6};
    for (int i=arr.size()-1; i>=0; i--){
        cout<<arr[i];
        if(i!=0){
            cout<<",";
        }
    }
}
