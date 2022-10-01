#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int n){
    int i=0;
    while(i<n){
        if(arr[i]==key){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    int arr[]={2,5,7,1,7,0,3};
    int key,n;
    cout<<"Enter Key:"<<endl;
    cin>>key;
    n=sizeof(arr)/sizeof(int);
    int ans=linearSearch(arr,key,n);
    cout<<ans;
    
}