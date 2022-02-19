//  Store value of n until n is positive . 
//  if n is negative Terminate the loop.

#include <iostream>
using namespace std;

int main(){
 
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    
 
    return 0;
}