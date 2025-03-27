#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1st Number : ";
    int x , y , z;
    cin>>x;
    cout<<"Enter 2st Number : ";
    cin>>y;
    cout<<"Enter 3st Number : ";
    cin>>z;

    if(x>y && x>z){
        cout<<"1st Number is maximum : "<<x;
    }
    if(y>x && y>z){
        cout<<"2st Number is maximum : "<<y;
    }
    if(z>x && z>y){
        cout<<"3rd Number is maximum : "<<z;
}
}