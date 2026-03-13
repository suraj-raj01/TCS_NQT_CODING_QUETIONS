// WAP to find repeating element

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

void repeatingElement(vector<int> arr){
    sort(arr.begin(), arr.end());
    cout<<"Repeating elements are : ";
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i]==arr[i+1])
        cout<<arr[i]<<" ";
    }
}

// optimal approach
void findRepeatingElements(vector<int>& arr) {
    map<int, int> elementCount;  // Map to store element counts
    for(auto i : arr) ++elementCount[i];  // Count occurrences of each element
    
    cout << "The repeating elements are: ";
    for(auto i : elementCount) {
        if(i.second > 1)  // If the element appears more than once
            cout << i.first << " ";  // Print the element
    }
}

int main(){
    vector<int> arr = {1,2,3,2,4,6,3,1,6,5,4,2,1,3,5,4,6};
    repeatingElement(arr);
    cout<<"\n";
    findRepeatingElements(arr);
    return 0;
}