#include<iostream>
using namespace std;
int main(){
    cout<<"enter the integer= ";
    int x;
    cin>>x;
    if(x%5==0 || x%3==0){
        if(x%15!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";

        }else{
            cout<<"Condition is not statisfied";
        }
    } 
    else{
        cout<<"Condition is not statisfied";
    }




}