// insert function
// Length or Size function

#include <iostream>
#include <string>

using namespace std;

int main(){

   string s1="Aditya";
   cout<<s1.size()<<endl;   // size of string

   s1.insert(3,"raj");  // insert substring in a string 
   cout<<s1<<endl;    

    cout<<s1.length()<<endl; // after insert substring . string length

    return 0;
}