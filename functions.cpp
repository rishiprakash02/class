#include <iostream>
using namespace std;

/*int power(){      ////////////Power///////////////
    int a,b;
    cin>>a>>b;
    int ans=1;
    for (int i=1; i<=b; i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
   
    int answer=power();
    cout<<"Answer is: "<<answer<<endl;
}*/



/*bool isEven(int a){    ////////////Even or odd/////////////
    
    if(a&1){
        return 0;//odd
    }
    else{
        return 1;//Even
    }
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}*/

/*int factorial(int x){  ///////////////////Permutations&combi//////////
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num= factorial(n);
    int den= factorial(r)*factorial(n-r);
    return num/den;
}

int main(){
    int r,n;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<answer<<endl;;
}*/

/*void count(int num){ //////////////////Counting numbers////////////
    for(int i=1; i<=num; i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}*/

int isPrime(int num){
    for (int i=2; i<num; i++){/// since 0 and 1 are not prime
         if (num%i==0){
            return 0;
         }
    }
    return 1;
} 

int main(){
    int n;
    cin>>n;
    if (isPrime(n)){
        cout<<n <<" is a prime number";
    }
    else{
        cout<<n <<" is not a prime number";
    }
}