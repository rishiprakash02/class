#include<iostream>
using namespace std;
int main(){
   /*nt i=7;
    cout<<(++i)<<endl;
    //8
    cout<<(i++)<<endl;
    //8  i=9
    cout<<(i--)<<endl;
    //7
    cout<<(--i)<<endl;
    //7   i=6  */
 


    /*************For Loop*******/
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Printing values from 1 to n"<<endl;
    /*for(int i =1; i<=n; i++){
        cout<<i<<endl;
    }*/
   
    //**************different way to use for loop */
   /* int i =1;
    for(; ; ){
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }*/
/********************* */

   /*for(int a=0,b=1; a>=0 && b>=1; a--,b--){
    cout<<a<<" "<<b<<endl;
    }*/

    //*********sum of n numbers */
   /*int sum = 0;
   for(int i=1; i<=n; i++){
        sum += i;
   }

   cout<<sum<<endl;*/

   //**************fibonacci series */
   /*int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   for (int i=1; i<=n; i++){
    int nxtnum=a+b;
    cout<<nxtnum<<" ";
    a=b;
    b=nxtnum;
   }*/

   //*************Prime Number using "break" */

  /* bool isprime=1;
   for(int i=2; i<n; i++){
    if(n%i==0){
       isprime=0;
       break; //to restrict the for loop from further checking the case for more values
    }
     }
    if(isprime==0){
        cout<<"It is not prime number"<<endl;
    }
    else{
        cout<<"It is a prime number"<<endl;
    }*/

    //*******continue statement */
   /*for(int i=1; i<=n; i++){
     cout<<"Hi"<<endl;
     cout<<"Hello"<<endl;
     continue;
     cout<<"Reply back to me"<<endl;
   }*/
   
   //***********Scope of variable********* */
   int i=3;
   cout<<i<<endl;
   if(true){
    int b=5;
    cout<<b<<endl;
   }
   int b=8;
   cout<<b<<endl;   
   for (int i=1; i<=8; i++){
    cout<<"hi"<<endl;
   } 
}