// Rotate an array by target position.

#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

// first method
void rotateArr1(vector<int>arr, int target){
    int size = arr.size();
    vector<int> vec(size,0);
    target %= size;

    for(int i=0; i<size; i++){
        vec[(target+i)%size] = arr[i];
    }

    for(int val:vec){
        cout<<val<<" ";
    }
}

// second method
void rotateArr(int arr[], int n, int k)
{
    k = k % n;
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 3;
    rotateArr1(arr,target);
    cout<<"\n";

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    rotateArr(arr1, n, target);

    for(int val:arr1){
        cout<<val<<" ";
    }

    return 0;
}