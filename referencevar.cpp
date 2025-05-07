# include<iostream>
using namespace std;
int c=40;
int main(){
    //*************Builtin Data types****************
    //int a,b,c;
    //cout<<"Enter a:\n";
    //cin>>a;
    //cout<<"Enter b:\n";
    //cin>>b;
    //c=a+b;
    //cout<<"sum is:"<<c<<endl;
    //cout<<"The global c is:"<<::c;//scope resolution operator is used to print the global value of variable "c" rather than taking local value of "c"
    

    //*************Float, Double, Long Double Literals****************
    //34.4 is considered as double even if it is assigned to a float variable, so to consider it as float we type f at the end of the number 
    //float d=34.4f;//you are sending the literal telling that it is float
    //long double e=34.4l;//l indicates that 34.4 is a long double
    //cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl; //by default 34.4 is taken a doble so its size is 8
    //cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl; // by mentioning 34.4f it is considered as float and it size is printed as 4
    //cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl; 
    //cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl; // by mentioning 34.4l it is considered as long double and its size is 12
    //cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl; 
    //cout<<"The value of d:"<<d<<endl<<"The value of e:"<<e;


    //*************Reference Variables****************
    //float x=67;
    //float & y=x;//y is a reference variable that points towards b
    //cout<<x<<endl;
    //cout<<y<<endl;

    //*************Typecasting****************
    int a=45;
    float b=65.7;
    cout<<"The value of a is:"<<(float)a<<endl;
    cout<<"The value of a is:"<<float(a)<<endl;
    cout<<"The value of b is:"<<(int)b<<endl;
    cout<<"The value of b is:"<<int(b)<<endl;
    int c = int(b);
    cout<<c;

    cout<<"addition is:"<<a + b<<endl;
    cout<<"addition is:"<<a + (int)b<<endl;
    cout<<"addition is:"<<a + int(b)<<endl;
    return 0;
}