#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    marks>33 ? cout<<"You have passed"<<endl : cout<<"Failed"<<endl;
}