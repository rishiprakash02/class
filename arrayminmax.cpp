#include <iostream>
#include <climits>
using namespace std;
int getMax(int num[], int n){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        maxi=max(maxi, num[i]);
        /*if(num[i]>maxi){
            maxi=num[i];
        }*/
    }
    cout<<"maximum is: "<<maxi<<endl;
}
int getMin(int num[], int n){
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        mini=min(mini, num[i]);
        /*if(num[i]<mini){
            mini=num[i];
        }*/
    }
    cout<<"minimum is: "<<mini<<endl;
}

int main(){
  int size;
  cin>> size;

  // initializing array
  int num[100];
  //taking input in array
  for(int i=0; i<size; i++){
    cin>>num[i];
  }
  getMax(num, size);
  getMin(num, size);
  
}
