/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int gcd(int m, int n){
    if(m==0){
        return n;
    }
    if(n == 0){
        return m;
        
    }
    return gcd(n%m,m);
}

int main()
{
    int m , n;
    cin>>m;
    cin>>n;
    int ans = gcd(m , n);
    cout<<ans;

    return 0;
}
