#include<iostream>
using namespace std;

int size(int arr[]){
    return sizeof(arr)/sizeof(int);
    //Here arr is reference and so its value will be 8
    //After dividing it with 4, the ans will be 2; 
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=size(arr);
    cout<<"The size is "<<n;
}