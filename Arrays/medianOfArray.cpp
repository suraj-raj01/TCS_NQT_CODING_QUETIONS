// WAP to find median of array
#include <iostream>
#include <algorithm>
using namespace std;

double getMedian(int arr[], int n){
    sort(arr,arr+n);
    if(n%2==0){
        return (arr[n/2-1]+arr[n/2])/2.0;
    }else{
        return arr[(n/2)];
    }
}

int main(){
    int arr[] = {4, 7, 1, 2, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    cout<<getMedian(arr,n);
    return 0;
}