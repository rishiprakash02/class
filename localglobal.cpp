# include<iostream>
using namespace std;
int glo=6; //global variable
void sum(){
    cout<<glo;//there is no local variable as glo in sum function so it considers global variable glo
}
int main(){
    // int a=4;
    // int b=5;
    int glo=9;//local variable
    glo=78;//updates local variable
    int a=4,b=5;
    float pi=3.14;
    char c='u';
    bool is_true = false;
    sum();
    cout<<glo<<is_true; //local variable will precede the global variable(and glo is present as local variable)
    // cout<<"This is tuorial 4.\nThe value of a is: "<<a<<". \nThe value of b is: "<<b;
    // cout<<"\nThe value of pi: "<<pi;
    // cout<<"\nThe value of c: "<<c;
    return 0;
}
