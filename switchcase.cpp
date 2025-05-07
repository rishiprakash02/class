#include<iostream>
using namespace std;
int main(){
    /*char n=10;
    cout<<endl;
    switch (2*n) {
        case 1: cout<<"First"<<endl;
            break;
        case 20: cout<<"Character f"<<endl;
            break;
        default: cout<<"It is default case"<<endl;
            break;
         

    }*/

    //////////*****calculator *////////

    int a,b;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    char operation;
    cout<<"Enter operation: "<<endl;
    cin>>operation;

    switch (operation) {
        case '+': cout<<a+b;
             break;
        case '-': cout<<a-b;
             break;
        case '*': cout<<a*b;
             break;
        case '/': cout<<a/b;
             break;
        case '%': cout<<a%b;
             break;
    }
    
}