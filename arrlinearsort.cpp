# include<iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={-4,8,12,6,-1,5,-9,3,-7,2};
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    bool found=linearsearch(arr,10,key);
    if(found){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }

}