// Sum of first N Natural Numbers
// Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

#include<iostream>
using namespace std;

class Solution {
    public:
    int sum_of_natural_number(int n){
        return (n*(n+1))/2;
    }

    // sum of number in given range
    int sum_of_numbers_in_given_range(int n1, int n2){
        int sum = 0;
        for(int i=n1; i<=n2; i++){
            sum += i;
        }
        return sum;
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<"sum of "<<n<<" : "<<obj.sum_of_natural_number(n)<<endl;
    int n1 = 1, n2 = 15;
    cout<<"sum of "<<n1<<" to "<<n2<<" : "<<obj.sum_of_numbers_in_given_range(n1,n2);
    return 0;
}