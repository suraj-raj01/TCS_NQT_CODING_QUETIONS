// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

bool isArmStrong(int n){
    int ln = to_string(n).length();
    int sum = 0;
    int num = n;

    while(num > 0){
        int ld = num % 10;
        sum += (int)pow(ld, ln);  // cast to int
        num /= 10;
    }

    return sum == n;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isArmStrong(n))
        cout << "ArmStrong Number" << endl;
    else
        cout << "Not ArmStrong Number" << endl;

    return 0;
}