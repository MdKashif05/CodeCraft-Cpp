#include<iostream>
using namespace std;
int main(){
    float SI , P , R , T;  //SI = Simple intrest, P = Principal amount,R = Rate of intrest, T = Time.
    cout<<"enter principal amount:";
    cin>>P;
    cout<<"enter rate of intrerst:";
    cin>>R;
    cout<<"enter time:";
    cin>>T;
    SI = P*R*T/100; //Formula for Simple Intrest
    cout<<"Simple Intrest is:";
    cout<<SI<<endl; 
    return 0;
}