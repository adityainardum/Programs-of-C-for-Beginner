// Half pyramid after 180 degree rotation
//   n =5

//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
#include <iostream>
using namespace std;

int main(){
 
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
       // 1st row  -- 4 space
       // 2nd row  -- 3 space
       // 3rd row  -- 2 space 
       // 4th row  -- 1 space
       // 5th row  -- 0 space
       // (n-i)  -- space
       // (j<n-i) -- print space [" "]
       // (j=n-i) -- print space [" "]
            if(j<=n-i)
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}