#include<iostream>
using namespace std;
int print_largest_subarray_sum(int arr[], int n){
    int prefixSum[n]={0};
    int largsetSum = 0;
    prefixSum[0]=arr[0];
    for(int i = 1 ; i < n ; i++ ){
        prefixSum[i] = prefixSum[i-1] + arr[i];
        
    }
    //1,3,4,-1,2
    //1,4,8,7,9
    
    for(int i=0 ; i < n; i++){
        for(int j = i+1 ; j < n ; j++){
            int subarrySum = i>0 ? prefixSum[j] - prefixSum[i-1] : prefixSum[j];
            largsetSum=max(subarrySum,largsetSum);
        }
    }
    return largsetSum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<print_largest_subarray_sum(arr,n);
}