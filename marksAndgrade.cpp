#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the marks of student: ";
    int x;
    cin>>x;
    if(x>=91){
        cout<<"Excellence";
        }
        else if(x>=81){
            cout<<"Very Good";
    
        }
        else if(x>=71){
            cout<<"Good";
        }
        else if (x>=61){
            cout<<"Can do better";
        }
        else if(x>=51){
            cout<<"Average";
        }
        else if (x>=41){
            cout<<"Need to hard work";
        }
        else{
            cout<<"Fail";
        }

        

}