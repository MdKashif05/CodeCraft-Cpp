#include<iostream>
using namespace std;
int main(){
    int a = 674; // a means dividend
    int b = 3;  // b means divisor
    int q = a/b; // q means quotient
    int r; // r means remainder
    // a = (b*q) + r
    // r = a - (b*q)
    r = a%b;  // % Modulus Operator is direct way to find reminder.
    cout<<r<<endl;
}
     /*Properties of Modulus Operator:
     1)If a < b then a%b = a
     2)a%(-b) = a%b 
     3)(-a)%(-b) = -(a%b)
     */