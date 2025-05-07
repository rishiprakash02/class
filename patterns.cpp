# include <iostream>
using namespace std;
int main(){
    /*int i,n;
    i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
   //***************** 

   /*int i,n;
   i=1;
   cin>>n;
   while(i<=n){
    int j=1;
    while(j<=n){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/
 //*****************
 /*int i,n;
 i=1;
 cin>>n;
 while(i<=n){
    int j=1;
    while (j<=n){
        cout<<n-j+1;    // or use logic j=n, j>0, cout<<j
        j=j+1;   //j=j-1
    }
    cout<<endl;
    i=i+1;
 
//***************** */
 
/*int i,n;
 int count=1;
 i=1;
 cin>>n;
 while(i<=n){
    int j=1;
    while (j<=n){
        cout<<count<<" ";    
        count=count+1;
        j=j+1;  
    }
    cout<<endl;
    i=i+1;
     }*/
 //***************** */ 
     
 /*int row,n;
 row=1;
 cin>>n;
 while(row<=n){
    int col=1;
    while (col<=row){
        cout<<row;   // cout<<"*" for * pattern 
        col=col+1;  
    }
    cout<<endl;
    row=row+1;
     }*/

//*********************** */

/*int row,n,count;
count=1;
row=1;
cin>>n;
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<count<<" ";
        count=count+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}*/
//*************** */
/*int row,n,value;
row=1;
cin>>n;
while(row<=n){
    int col=1;
    value= row;
    while(col<=row){
        cout<<value<<" ";
        value=value+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}*/

int i,n;
i=1;
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<(i-j+1);
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

}