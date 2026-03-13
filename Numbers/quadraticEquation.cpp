// Program to Find Roots of a quadratic equation
// Problem Statement: The standard form of a quadratic equation is: ax^2 + bx + c = 0, where a, b and c are real numbers and a != 0. Given a, b and c of the equation, find the roots of the equation.

#include<iostream>
#include<cmath>
using namespace std;

class Solution{
    public:
    void quadratic_equation(int a, int b, int c){
        // find dicriminant
        int d = b*b - 4*a*c;
        // square root of absolute dicriminant
        double sqrt_val = sqrt(abs(d));

        // case when roots are real and different
        if(d>0){
            cout<<"Roots are real and different\n";
            double root1 = (-b+sqrt_val)/2*a;
            double root2 = (-b-sqrt_val)/2*a;
            cout<<root1<<","<<root2;
        }
        // case when roots are real and same
        else if(d==0){
            cout<<"Roots are real and same\n";
            double root = -(double)b / (2*a);
            cout<<root<<","<<root;
        }
        // case when roots are complex
        else{
            cout<<"Roots are complex\n";
            cout<<"-("<<-(double)b / (2*a)<<" +i"<<sqrt_val<<",";
            cout<<-(double)b / (2*a)<<" -i"<<sqrt_val<<")";
        }
    }
};

int main(){
    Solution obj;
    int a,b,c;
    cin>>a>>b>>c;
    obj.quadratic_equation(a,b,c);
    return 0;
}