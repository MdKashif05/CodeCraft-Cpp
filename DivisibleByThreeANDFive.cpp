#include<iostream>
using namespace std;
int main(){
    cout<<"enter positive integer: ";
    int x;
    cin>>x;

    if(x%3==0 && x%5==0){   
        cout<<"Divisible by 3 and 5";

    }
    else{
        cout<<"Not Divisible by 3 and 5";
    }
}