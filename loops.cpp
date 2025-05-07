# include <iostream>
using namespace std;
int main(){
    int n,i,count;
    i=2;
    count=0;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    while(i<=n-1){
        if(n%i==0){
           count=count+1;
        }
        i=i+1;
    }
    if(count==1){
        cout<<n<<" "<<"is not a prime number"<<endl;
    }
    else{
        cout<<n<<" "<<"is a prime number"<<endl;
    }
    
}
