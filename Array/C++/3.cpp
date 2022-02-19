//   Binary Search Time complexity - O(log n base 2) 
//   Time complexity of Binary Search is less than Linear Search
//   elements in array are sorted order means increasing order

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key )
{
    
    int s=0;  // starting element index = 0
    int e=n;  // end element index = n

    //  2 , 4 , 5 , 6 , 9
    //  key 
    //  start index = 0
    //  end index  = 4
    //  mid index = 2
    //  arr[2] = 5  compare with key 
    //  arr[2] < key
    //  start index = 3 (mid index + 1)
    //  arr[2] > key
    //  end index = (mid index - 1)

    while(s<=e)
    {
        int mid=(s+e)/2;  //  mid index
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

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

   int key;
   cout<<"Key: ";
   cin>>key;

   cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}