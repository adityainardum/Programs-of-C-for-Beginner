//  zig-zig Pattern
//  n = 9

//     *       *     
//   *   *   *   *   
// *       *       * 

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // number of row is fixed = 3

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            // (i+j)%4==0  print "*"
            //  i==2 and j%4==0  print "*"
            
            if((i+j)%4==0 || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}