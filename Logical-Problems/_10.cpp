//	Check a given number is Armstrong number or not

// Armstrong number means – 
// a number “153” whose addition of cube of all digit  is “153”   
                                     
#include <iostream>
#include <math.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   int sum=0;
   int original=n;
while(n>0){

    int lastdigit=n%10;
    sum=sum+pow(lastdigit,3);
    n=n/10;
}
   if(sum==original) {
       cout<<"Armstrong Number"<<endl;
   }
   else{
       cout<<"Not Armstrong Number"<<endl;
   }
   

    return 0;
}