// Program to Add two fractions
// Problem Statement: Given numerator and denominator of two fractional numbers, return the sum of two fractional numbers.

#include<iostream>
using namespace std;

class Solution{
    public:
    // function to compute gcd
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    void add_two_fractions(int n1,int d1, int n2, int d2){
        int lcm = (d1*d2) / gcd(d1,d2);

        // convert both numerators to same denominator
        int newNum1 = n1* (lcm/d1);
        int newNum2 = n2* (lcm/d2);

        // add the numerators
        int resultNum = newNum1 + newNum2;
        int resultDen = lcm;

        // simplify the result by dividing by gcd
        int common = gcd(resultNum,resultDen);
        resultNum /= common;
        resultDen /= common;

        // print result
        cout<<resultNum<<" / "<<resultDen<<endl;
    }
};

int main(){
    Solution obj;
    int Numerator1,Denominator1,Numerator2,Denominator2;
    cin>>Numerator1>>Denominator1>>Numerator2>>Denominator2;
    obj.add_two_fractions(Numerator1,Denominator1,Numerator2,Denominator2);
    return 0;
}