// 	Palindromic pattern
//  n = 5 

//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5


#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        // divide column in three part
        //  (1)  for space = n-i
        
        int j;
        for( j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        //  (2)  start with k=i and the decrease

        int k=i;
        for(; j<=n;j++)
        {
            cout<<k--<<" ";
        }

        //  (3)  start with k= 2 and then increase

        k =2;
        for(; j<=n+i-1; j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }

    return 0;
}