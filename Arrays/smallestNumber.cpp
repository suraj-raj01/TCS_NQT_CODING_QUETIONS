#include <iostream>
#include <vector>
using namespace std;

int smallestNumber(vector<int> arr){
    int smallest = INT32_MAX;
    for (int i = 0; i < arr.size(); i++){
        if (smallest > arr[i]){
            smallest = arr[i];
        }
    }
    return smallest;
}

int SecondSmallestNumber(vector<int> arr){
    int smallest = INT32_MAX;
    int secondSmallest = INT32_MAX;
    for (int i = 0; i < arr.size(); i++){
        if (smallest > arr[i]){
            secondSmallest = smallest;
            smallest = arr[i];
            if (secondSmallest > arr[i] && smallest < arr[i]){
                secondSmallest = arr[i];
            }
        }
    }
    return secondSmallest;
}

int main()
{
    vector<int> arr = {-58, 5, -587, 51};
    cout << "Smallest Number : " << smallestNumber(arr) << endl;
    cout << "Second Smallest Number : " << SecondSmallestNumber(arr) << endl;
    return 0;
}