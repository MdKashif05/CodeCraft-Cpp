#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if((ascii >= 97 && ascii <= 122)|| (ascii >= 65 && ascii <= 90) ){
        cout<<"It an  alphabet";
    }
    else{
        cout<<"It is not an alphabet";
    }
}
