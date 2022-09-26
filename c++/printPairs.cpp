#include<iostream>
using namespace std;

void printAllPairs(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            cout<< "(" << arr[i] << "," << arr[j] <<" )"<<endl;
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    printAllPairs(arr,5);
}