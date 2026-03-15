// WAP to count frequency of all element

#include<iostream>
#include<map>
using namespace std;

void frequency(int arr[], int n){
    map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for (auto it : freq){
        cout<<it.first<<" -> "<<it.second<<" Times"<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,2,1,4,5,6,2,5,3};
    int n = sizeof(arr)/sizeof(int);
    frequency(arr,n);
    return 0;
} 