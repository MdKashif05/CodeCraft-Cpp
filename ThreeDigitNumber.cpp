#include<iostream>
using namespace std;
int main(){
    cout<<"enter three digit number: ";
    int x;
    cin>>x;

    if(x>=100 && x<+999){    //&& is a logical operator which means "and".It is used to combine tow conditions.Code inside the if block will run only when both conditions are true.
        cout<<"Three digit number";

    }
    else{
        cout<<"Not a three digit number";
    }
}