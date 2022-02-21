// Pair Sum Problem
// Check if there exists two elements in an array such that their sum is equal 
// to given k 

#include <bits/stdc++.h>
using namespace std;


bool pairsum(int a[], int k , int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){

   int a[]={2,4,7,11,14,16,20,21};
   int k=31;

    cout<<pairsum(a,k,8)<<endl;
    return 0;
}