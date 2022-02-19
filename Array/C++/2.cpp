//  Linear Search   complexity - O(n)
//  {23,45,12,9,56,7,3}
//   input key = 7
//  Find Index of key

#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
         if(arr[i]==key){
             return i;
         }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"Input Array value: ";
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }

    int key;
    cout<<"Input key: ";
    cin>>key;

    cout<<linearsearch(arr,n,key)<<endl;
}
