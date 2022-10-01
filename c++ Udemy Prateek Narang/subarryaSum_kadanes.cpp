#include<iostream>
using namespace std;

int kadanesSubArraySum(int arr[], int n){
    int cs = 0;
    int ls = 0;
    for(int i = 0; i < n; i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ls=max(cs,ls);
    }
    return ls;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<kadanesSubArraySum(arr,n);
}
