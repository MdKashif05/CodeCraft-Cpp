#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int x;
    cin>>x;
    
    if(x>0){
        cout<<"x";
    }
    else{ //x<=0 
        cout<<-x;
    }
}