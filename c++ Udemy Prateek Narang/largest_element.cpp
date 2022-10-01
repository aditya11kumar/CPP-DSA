#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int n = arr.size();
    int largest=INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
     
}