// compare strings

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1= "abc";
    string s2= "abc";

    if(s2.compare(s1)==0)
    cout<<"strings are equal"<<endl;

    if(!s2.compare(s1))
    cout<<"strings are equal"<<endl;

    cout<<s2.compare(s1)<<endl;

    return 0;
}