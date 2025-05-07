# include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"reversed array:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
}*/
void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }

    }
}

///////////////reverse array///////
/*int main(){
    int arr[6]={3,9,2,-3,4,5};
    int brr[5]={2,1,7,10,12};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

}*/

////////////////swap alternate elements////////////

int main(){
    int even[8]={9,5,-1,7,-4,0,3,-2};
    int odd[5]={5,-9,6,1,12};

    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 5);
    printArray(odd, 5);
    
}