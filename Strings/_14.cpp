// form the biggest number from the Numeric string

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s="259038209978316293";
     
     // for decreasing order - use argument greater<int>()
    sort(s.begin() , s.end() , greater<int>());
    
    cout<<s<<endl;

    return 0;
}