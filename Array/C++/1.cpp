// Input array n and Find maximum and minimum

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int MaxNo=INT_MIN;
    int MinNo=INT_MAX;

    for(int i=0;i<n;i++)
    {
        MaxNo=max(MaxNo,arr[i]);
        MinNo=min(MinNo,arr[i]);
    }
    cout<<MaxNo<<" "<<MinNo<<endl;



    return 0;
}