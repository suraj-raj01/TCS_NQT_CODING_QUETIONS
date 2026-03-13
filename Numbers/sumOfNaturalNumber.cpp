// Sum of first N Natural Numbers
// Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

#include<iostream>
using namespace std;

class Solution {
    public:
    int sum_of_natural_number(int n){
        return (n*(n+1))/2;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<"sum of "<<n<<" : "<<obj.sum_of_natural_number(n);
    return 0;
}