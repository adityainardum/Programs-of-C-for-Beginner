// Pascal Triangle
//  n = 4

// 1(0,0)
// 1(1,0)   1(1,1)
// 1(2,0)   2(2,1)   1(2,2)
// 1(3,0)   3(3,1)   3(3,2)   1(3,3)
// 1(4,0)   4(4,1)   6(4,2)   4(4,3)  1(4,4)

// Binomial expression
// ti,j = iCj 
//  iCj = i! /((i - j)! j!)

#include <iostream>
using namespace std;

int fact(int n)
{
    int t = 1;
    for(int i=2;i<=n;i++)
    {
        t = t * i;
    }
    return t;
}

int main(){

    int n;
    cout<<"INPUT: ";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int ans = fact(i)/(fact(i-j)*fact(j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}