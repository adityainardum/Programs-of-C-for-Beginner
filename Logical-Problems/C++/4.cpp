//	Check if a number is prime or not.


#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
     
     int i;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
    
    }

    if(n==i){
        cout<<"Prime"<<endl;
    }

    return 0;
}