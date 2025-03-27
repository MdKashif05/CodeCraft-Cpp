#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Cost Price :";
    int CP , SP ;
    cin>>CP;
    cout<<"Enter Selling Price :";
    cin>>SP;
    if(SP>CP){
        cout<<"Profit = "<<SP-CP<<endl;
    }
    if(SP<CP){
        cout<<"Loss = "<<CP-SP<<endl;
    }
    if(SP==CP){
        cout<<"No money is made loss.";
    }
}