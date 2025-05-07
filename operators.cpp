//There are two types of header files
//1)System header file- it comes with compiler
# include<iostream>
//2)User defined header file-it is written by the programmer
// # include "this.h"--> it will produce an error if this.h is not present in current directory
using namespace std;
int main(){
    int a=2,b=8;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are operators in C++"<<endl;
    //Arithmetic
    cout<<"value of a+b:"<<a+b<<endl;
    cout<<"value of a-b:"<<a-b<<endl;
    cout<<"value of a*b:"<<a*b<<endl;
    cout<<"value of a/b:"<<a/b<<endl;
    cout<<"value of a%b:"<<a%b<<endl;
    cout<<"value of a++:"<<a++<<endl;
    cout<<"value of a--:"<<a--<<endl;
    cout<<"value of ++a:"<<++a<<endl;
    cout<<"value of a/b:"<<a/b<<endl;

    //Assignment Operators--> used to assign values to variables
    // int a=6,b=8;   char c='d'


    //comparision Operators
    cout<<"value of a==b:"<<(a==b)<<endl;
    cout<<"value of a!=b:"<<(a!=b)<<endl;
    cout<<"value of a>=b:"<<(a>=b)<<endl;
    cout<<"value of a<=b:"<<(a<=b)<<endl;
    cout<<"value of a>b:"<<(a>b)<<endl;
    cout<<"value of a<b:"<<(a<b)<<endl;
   
    //Logical Operators
    cout<<"value of logical and operator ((a==b) && (a<b)): "<<((a==b)&&(a<b))<<endl;
    cout<<"value of logical or operator ((a==b) || (a<b)): "<<((a==b)||(a<b))<<endl;
    cout<<"value of logical not operator (!(a==b)): "<<!(a==b)<<endl;
    

    return 0;
}