#include<iostream>
#include<set>
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

int removeDuplicates(vector<int> &nums){
    set<int>st(nums.begin(),nums.end());
    int i=0;
    for(int val:st){
        nums[i] = val;
        i++;
    }
    return st.size();
}
int main(){
    vector<int> arr = {1,2,3,1,2,5,4,3,2,1,5,4,6};
    removeDuplicate(arr);
    cout<<endl;
    vector<int> nums = {1,2,3,5,2,1,4,3,2};
    int size = removeDuplicates(nums);
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}