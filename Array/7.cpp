// Max Till i
// Given an array a[] of size n. For every i from 0 to n-1 .
// Output max (a[0],a[1],...,a[i]).

#include <iostream>
using namespace std;

int main(){

    int mx=INT_MIN;
    int n;
    cout<<"Size of Array: ";
    cin>>n;

    int a[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
         cin>>a[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }



}