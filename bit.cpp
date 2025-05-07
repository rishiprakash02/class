#include <iostream>
#include <math.h>
using namespace std;
int main(){


    //////************binary to decimal************/
    /*int n;
    cin>>n;
    double ans=0;
    int i=0;
    while(n!=0){
       int bit= n & 1;
        ans = (bit * pow(10,i) )+ ans;
        i++;
        n= n >> 1;
       
    }
    cout<<"answer is: "<<ans<<endl;*/

    //////********Alternate method */
    /*int n;
    cin>>n;
    int ans=0;
    int i=1;
    while(n!=0){
       int bit= n & 1;
        ans = (bit * i )+ ans;
        i *=10;
        n= n >> 1;
       
    }
    cout<<"answer is: "<<ans<<endl;*/
  
    //////*******Binary to decimal************ */

    int n;
    cin>>n;
    int ans=0, i=0;
    while(n!=0){
        int digit= n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i=i+1;
    }
    cout<<"answer is: "<<ans<<endl;


}