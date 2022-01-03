// 0-1 pattern
//  n = 5

//  1
//  0 1
//  1 0 1
//  0 1 0 1
//  1 0 1 0 1

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

        // (i,j)
        
        // 1(1,1)
        // 0(2,1)  1(2,2)
        // 1(3,1)  0(3,2)  1(3,3)
        // 0(4,1)  1(4,2)  0(4,3)  1(4,4)
        // 1(5,1)  0(5,2)  1(5,3)  0(5,4)  1(5,5)

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            
          if((i+j)%2==0)
          {
              cout<<"1 ";
          }
          else{
              cout<<"0 ";
          }
        }
        cout<<endl;
    }

    return 0;
}