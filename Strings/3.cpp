// Empty  Function

#include <iostream>
using namespace std;

int main(){
  
    string s1="abc";
    cout<<s1<<endl;

    s1.clear();

    if(s1.empty())
    cout<<"string is empty"<<endl;

/////////////////////////////////////////////
    string s2="xyz";
    cout<<s2<<endl;
      
    if(!s2.empty())
    cout<<"string is not empty";





    return 0;
}