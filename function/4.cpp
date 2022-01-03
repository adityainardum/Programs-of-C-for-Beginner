// Find n!
// 1! = 1
// 2! = 1 * 2
// 3! = 1 * 2 * 3
// 4! - 1 * 2 * 3 * 4
// n! = 1 * 2 * 3 * 4 * ---* n

#include <iostream>
using namespace std;

int fact(int n)
{
    int t = 1;
    for(int i=1;i<=n;i++)
    {
        t = t * i;
    }
    return t;
}

int main(){

    int n;
    cout<<"Factorial of number: ";
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;

    return 0;
}