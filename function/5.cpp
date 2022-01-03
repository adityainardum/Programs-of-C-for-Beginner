// Calculate nCr
// nCr = n! / (n - r)!*r!

#include <iostream>
using namespace std;

int fact(int n )
{
    int t = 1;
    for(int i = 1; i<=n;i++)
    {
        t = t*i;
    }
   return t;
}

int main(){

    int n;
    cout<<"To Calculate nCr"<<endl;
    cout<<"n = ";
    cin>>n;

    int r;
    cout<<"r = ";
    cin>>r;

    int ans = fact(n) / (fact(n-r) * fact(r));
    cout<<ans<<endl;


    return 0;
}