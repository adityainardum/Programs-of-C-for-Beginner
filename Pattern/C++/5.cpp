// 	Half pyramid using numbers
// n = 5

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    // 1st row - 1 
    // 2nd row - 2 2
    // 3rd row - 3 3 3
    // 4th row --4 4 4 4
    // 5th row --5 5 5 5 5
    // ith row --i i i i i i -----

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}