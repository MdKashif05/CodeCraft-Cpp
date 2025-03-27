#include<iostream>
using namespace std;
int main(){
    cout<<"Enter anumber :";
    int x;
    cin>>x;

    if(x%2==0){              //() The conditions is written in this bracket. If the statement is true then the code inside the bracket will be excuted. 
        cout<<"Even number."<<endl;
    }
    else{                   //If the statement is false then the code inside the else bracket will be excuted. 
        cout<<"Odd number."<<endl;
    }
}
