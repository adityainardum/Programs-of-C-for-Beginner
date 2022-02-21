// Basic overview 

#include <iostream>
using namespace std;

int main(){

    string str="dsggfgsdffjdfjf  disjfij  idsfi";
    str.clear();     //  clear string character
    cout<<str<<endl;

    /* Print sentence with space use getline() function */ 
    
    // getline(cin,str);
    //  cout<<str;
 
    string s1="fam";
    string s2="ily";
     
    s1.append(s2);  // s1 = s1 + s2 
    cout<<s1<<endl;  // print s1 

    cout<<s1[1]<<endl;  // print 1 indexing character of s1

    return 0;
}