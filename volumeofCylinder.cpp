#include<iostream>
using namespace std;
int main(){
    float pie , r , h , vol ;
    cout<<"Enter the hight: ";
    cin>>h;
    cout<<"Enter the radius: ";
    cin>>r;
    pie = 3.14;
    vol = pie*r*r*h;
    cout<<"The volume of the cylinder is: "<<vol<<endl;

}