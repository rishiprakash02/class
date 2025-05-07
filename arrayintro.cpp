# include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    //declare
    int number[13]={0};
    printarray(number, 13);

    //print only 1
    int one[13]={1};
    printarray(one, 13);

    int onesize=sizeof(one)/sizeof(int);
    cout<<onesize<<endl;
    cout<<sizeof(one);
}