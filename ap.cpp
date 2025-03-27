#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // 1 3 7... n terms of AP
    for(int i=1; i<=2*n-1; i+=2){
        cout<<i<<endl;
    }
}