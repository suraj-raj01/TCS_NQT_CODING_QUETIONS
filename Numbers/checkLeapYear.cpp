// check leap year

#include<iostream>
using namespace std;
#define isLeapYear(y)  ((y%400 == 0) ||  (y%4 == 0 && y%100 != 0))

bool checkIsLeapYear(int year){
    if(isLeapYear(year)){
        return true;
    }
    return false;
}

int main(){
    int year;
    cout<<"Enter year ";
    cin>>year;
    if(checkIsLeapYear(year)){
        cout<<"Leap Year";
    }else{
        cout<<"Not Leap Year";
    }
    return 0;
}