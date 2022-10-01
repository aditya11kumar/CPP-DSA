#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int i=0;
    int j=n-1;
    int temp;
    while(j>i){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}


int main(){
    int arr[]={1,2,4,5,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"The array after revese is"<<endl;
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}