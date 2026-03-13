// WAP to find average of all element

#include<iostream>
#include<math.h>
using namespace std;

double average(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    double avg = (double)sum/n;
    return avg;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Average : "<<average(arr,n);
    return 0;
}