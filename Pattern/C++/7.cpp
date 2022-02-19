// Butterfly Pattern
//  n = 5

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

// *        *
// **      **
// ***    ***
// ****  ****
// **********

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        //  space - 2*n-2*i
        int space =2*n-2*i;
        for(int i=1;i<=space;i++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    for (int i = n; i >=1; i--)
    {
        for (int j = i; j >=1; j--)
        {
            cout << "*";
        }

        //  space - 2*n-2*i
        int space =2*n-2*i;
        for(int i=space;i>=1;i--)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}