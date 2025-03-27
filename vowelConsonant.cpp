#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character: ";
    char ch;
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout<<"The Character is a vowel";
    }
    else{
        cout<<"Consonant";
    }
}