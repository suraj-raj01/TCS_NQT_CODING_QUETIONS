/*
An automobile company manufactures both two-wheelers (TW) and four-wheelers (FW).

A company manager wants to determine how many two-wheelers and four-wheelers must
be manufactured based on the following data:

* Total number of vehicles = v
* Total number of wheels = w

you need to find:

* Number of Two-wheelers(TW)
* Number of Four-wheelers(FW)

if the given data is invalid, print -1.
____________________________________________________________________________________
Solution:
let 'x' is the 2 wheeler and 'y' is the 4 wheeler.

x + y = v ----(1)
2x + 4y = w ---(2)  // two-wheelers have two wheels and four-wheelers have four wheels.

from eq(1) and (2)

-------------
| x = v-y   |
-------------

from eq(1)

2(v-y) + 4y = w
2v - 2y + 4y = w
2v + 2y = w
2y = w - 2v
---------------------
| y = (w - 2v) / 2  |
---------------------

BASE CASE
___________________________________________
1) wheels should be even number
2) wheels should be less than 2*(TW)
3) wheels should be greater than 4*(FW)
____________________________________________
*/

#include<iostream>
using namespace std;

int main(){
    int v,w;
    cin>>v>>w;
    if(w%2!=0 || w<2*v || w>4*v){
        cout<<-1;
        return 0;
    }
    int fourWheelers = (w-2*v)/2;
    int twoWheelers = v - fourWheelers;
    cout<<twoWheelers<<" "<<fourWheelers;
}