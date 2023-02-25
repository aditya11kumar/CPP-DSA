/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// void housingps(int arr[], int n, int k){
//     //{1,3,5,4,7,8,2,1,1}
//     //{1,4,9,13,20,28,30,31,32}
//     int ps[n];
//     ps[0] = arr[0];
    
//     for(int i = 1; i < n; i++){
//         ps[i] = ps [i-1] +arr[i];
//     }//ps done
    
//     for(int i  = 1; i < n ; i++){
//         if(ps[i] == k){
//             cout<<0 <<" "<<i<<endl;
//             break;
//         }
//     }
//     // for(int i = 1 ; i < n; i++){
//     //     for( int j  = i)
//     // }
//     int i =1;
//     int j = i+1;
//     while(i <  n and j < n){
//         if(ps[j]- ps[i-1] == k){
//             cout<<i<<" "<<j<<endl;
//         }
//         if(ps[j]- ps[i-1] > k){
//             i++;
//         }
//         if(ps[j]- ps[i-1] << k){
//             j++;
//         }
//     }
    
    
// }


//{1,3,5,4,20,8,2,1,1}//cs = 0
void housingsw(int arr[], int n, int k){
    int cs = 0;
    for(int i = 0, j = i; j < n and i <n; j++ ){
        cs = cs + arr[j];
        if(cs==k){
            cout<<i<<" "<<j<<endl;
        }
        while(cs > k and i<=j ){
            cs= cs - arr[i];
            i++;
        }
    }
}

int main()
{
    //cout<<"Hello World";
    int arr[10] = {1,3,5,4,20,8,2,1,1,0};
    int  k = 4;
   // housingps(arr,10,k) ;
   housingsw(arr,10,k);

    return 0;
}
