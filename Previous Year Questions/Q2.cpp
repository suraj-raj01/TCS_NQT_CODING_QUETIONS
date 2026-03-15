/*
Consider the following series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187,......

This series is the misture of 2 series - all the odd terms in this series from a geometric
series and all the even terms from yet another geometric series.
Write a program to find the Nth term in the series.

The value N is a positive interger thant should be read from STDIN. The Nth term that
calculated by the program should be written to STDOUT. Other than the value of the nth term,
no other character/string or message should be written to STDOUT. For example, if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.

You can assume that N will not exceed 30.

Solution:
first series (odd index):
1,2,4,8,16,32,64,128

2*pow(0) -> 1
2*pow(1) -> 2
2*pow(2) -> 4
2*pow(3) -> 8
2*pow(4) -> 16
2*pow(5) -> 32

Formula :- (N-1)/2

second series (even index):
1,3,9,27,81,243,729,2187

3*pow(0) -> 1
3*pow(1) -> 3
3*pow(2) -> 9
3*pow(3) -> 27
3*pow(4) -> 81
3*pow(5) -> 243

Formula :- (N/2)-1

*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result=0;
    // check input number is even or odd
    if(n%2!=0){
    int power = (n-1)/2;
    result = pow(2,power);
    }else{
    int power = (n/2)-1;
    result = pow(3,power);
    }
    // print ther nth term
    cout<<result;
    return 0;
}
