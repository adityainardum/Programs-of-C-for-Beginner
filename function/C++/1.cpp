//	Print all prime number between two given numbers .

#include<iostream>
#include <math.h>
using namespace std;

bool isprime(int num){

    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
        
    

     int a;
     cout<<"Prime Numbers between First Input and second Input"<<endl;
     cout<<"First Input: ";
     cin>>a;

     int b;
     cout<<"Second Input: ";
     cin>>b;

     for(int i=a;i<=b;i++)
     {
         if(isprime(i))
         {
             cout<<i<<endl;
         }
     }
    return 0;
}