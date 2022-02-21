// erase function

#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1="nicompoop";

    s1.erase(3,3);

    cout<<s1<<endl;   // s1 = nicoop

    s1.erase(4,2);

    cout<<s1<<endl;   // s1 = nico 

    
   
    return 0;
}