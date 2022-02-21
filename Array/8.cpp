// Sum of All Subarrays
// Given an array a[] of size n. Output sum of each 
// subarray of the given array.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Size of Array: ";
    cin>>n;

    int a[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int sum=0; // store current sum

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            cout<<sum<<endl;
        }
        
    }

    return 0;
}