// WAP to find non-repeating element

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

// optimal approach
void findNonRepeatingElements(vector<int>& arr) {
    map<int, int> hashMap;  // Map to store element counts
    for(auto i : arr) ++hashMap[i];  // Count occurrences of each element
    
    cout << "The non-repeating elements are: ";
    for(auto i : hashMap) {
        if(i.second == 1)  // If the element appears more than once
            cout << i.first << " ";
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,2,5,3};
    cout<<"\n";
    findNonRepeatingElements(arr);
    return 0;
}