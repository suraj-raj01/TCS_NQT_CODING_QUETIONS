#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void removeDuplicate(vector<int> arr){
    int n = arr.size();
    if(n==0){
        return;
    }
    int j=0;
    sort(arr.begin(), arr.end());

    for(int i=1; i<n; i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j] = arr[i];
        }
    }

    for(int i=0; i<j; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,2,3,1,2,5,4,3,2,1,5,4,6};
    removeDuplicate(arr);
    return 0;
}