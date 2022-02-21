// Transform function
// convert uppercase to lowercase 
// convert lowercase to uppercase 

#include <bits/stdc++.h>
using namespace std;

int main(){

   string s="adijghidfhdjbfhu";

   transform(s.begin() , s.end() , s.begin() , ::toupper);
   cout<<s<<endl;

   transform(s.begin(), s.end(), s.begin() , ::tolower);
   cout<<s<<endl;

    return 0;
}