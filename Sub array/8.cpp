// Maximum Subarray Sum
//  Kadanes's Algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    int mx=INT_MIN;

    for(int i=0;i<n;i++)
    {
       sum+=a[i];
       if(sum <0){
           sum=0;
       }
       mx=max(mx,sum);
    }

    cout<<mx<<endl;

    return 0;
}