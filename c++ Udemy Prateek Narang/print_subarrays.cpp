#include <iostream>
using namespace std;

void print_subarrays(int arr[], int n){
    for(int i = 0 ; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            for(int k = i; k <= j ; k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    print_subarrays(arr,5);
}