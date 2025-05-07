# include<iostream>
# include<iomanip>
using namespace std;
int main(){
   // int a=5;
   // cout<<"The value of a was:"<<a<<endl;
   // a=45;
   // cout<<"The value of a is:"<<a<<endl;

   //**************Constants************
   //const float a=57.9;//for the value of "a" to not be changed we use const 
   //cout<<"The value of a was:"<<a<<endl;
   //a=56.1; give error because variable "a" becomes readnoly

    //**************Manipulators(setw)************(using # include<iomanip>)
    int a=3, b=56, c=3478;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;


    cout<<"The value of a is: "<<setw(4)<<a<<endl;//the value in "a" takes up 4 places and gets right justified(_ _ _ 3)
    cout<<"The value of b is: "<<setw(4)<<b<<endl;//the value in "b" takes up 4 places and gets right justified(_ _ 5 6)
    cout<<"The value of c is: "<<setw(4)<<c<<endl;//the value in "c" takes up 4 places and gets right justified(3 4 7 8)

    
    return 0;
}