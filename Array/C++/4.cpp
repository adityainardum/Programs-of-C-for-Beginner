//  Selection Sort

//  Rearrange order in sorting.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){   // for increasing order
                int value=arr[i];
                arr[i]=arr[j];
                arr[j]=value;
            }

        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;;
    }

    return 0;
}