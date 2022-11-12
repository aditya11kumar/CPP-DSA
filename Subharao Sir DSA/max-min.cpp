/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int maxArr(int arr[], int i, int j){
    if(i = j){
        return arr[i];
    }
    int n = (i+j)/2;
    int val1=  maxArr(arr,i,n);
    int val2 = maxArr(arr,n+1,j);
    return val1 > val2 ? val1 : val2;
}

int main()
{
    int arr[10] = {5,24,12,67,33,22,11,66,77,88};
    int ans = maxArr(arr,0,9);
    cout<<ans;
    return 0;
}
