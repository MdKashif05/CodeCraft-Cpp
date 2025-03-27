#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter 1st side of triangle: ";
    cin>>a;
    cout<<"enter 2nd side of triangle: ";
    cin>>b;
    cout<<"enter 3rd side of triangle: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){  //triangle inequality theorem
        cout<<"It is a valid triangle"<<endl;
    }
    else{
        cout<<"Invalid triangle"<<endl;
    }
}