# include <iostream>
using namespace std;
int main(){
    /*int i,n;
    cin>>n;
    i=1;
    while (i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
   //******************** */
   /*int i,n;
    cin>>n;
    i=1;
    while (i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
   //**************** */
   /*int i,n;
    cin>>n;
    i=1;
    while (i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
   //******************** */
   /*int i,n;
    cin>>n;
    i=1;
    while (i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/ //************** */
    /*int i,n;
    cin>>n;
    i=1;
    while (i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/  //**************** */
    /*int i,n;
    cin>>n;
    int value;
    i=1;
    while (i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        value=i;
        while(j<=n-i+1){
            cout<<value;
            j=j+1;
            value=value+1;
        }
        cout<<endl;
        i=i+1;
    } */  //*************************** */ 
    /*int i,n,value;
    cin>>n;
    i=1;
    value=1;
    while (i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
      
        while(j<=i){
            
            cout<<value;
            j=j+1;
            value=value+1;
        }
        cout<<endl;
        i=i+1;
    }*/  //**************************** */

    /*int i,n,value;
    cin>>n;
    i=1;
    while (i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
      
        while(j<=i){
            
            cout<<j;
            j=j+1;
        }
        int start=i-1;
            while(start){
            cout<<start;
            start=start-1;
              }
        cout<<endl;
        i=i+1;
    }*/  //******************** */

    int i,n,value,num;
    cin>>n;
    i=1;
    while (i<=n){
        int value=n-i+1;
        int j=1;
        while(j<=value){
            cout<<j;
            j=j+1;
        }
        int star=i-1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int space=i-1;
        while(space){
            cout<<"*";
            space=space-1;
        }
       
        while(n<0){
            num=n;
        while(j<=n){
            
            cout<<n;
            num=num-1;
            j=j+1;
           }
          n=n-1;
        }
        cout<<endl;
        i=i+1;
    }
    
}