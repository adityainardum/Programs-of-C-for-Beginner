//   Bubble Sort

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      
    // 1st iteration = n-1
    // 2nd iteration = n-2
    // 3rd iteration = n-3
    // ith iteration = n-i

    int counter=1;  // counter is iteration
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int value=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=value;
            }
        }
        counter++;  // for next iteration
    }
     
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

    return 0;
}