//Rectange hollow pattern
//  row = 4 , col = 3

// * * * 
// *   * 
// *   * 
// * * *

#include <iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter Number of Rows: ";
    cin>>row;

    int col;
    cout<<"Enter Number of Col: ";
    cin>>col;
     
    
    for( int i=1;i<=row;i++)
    {
        for( int j=1;j<=col;j++)
        { 
            // "*" display at first row , last row , first col and last col
            if(i==1 || i==row || j==col || j==1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}