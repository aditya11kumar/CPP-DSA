#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Displayed marks is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    
}