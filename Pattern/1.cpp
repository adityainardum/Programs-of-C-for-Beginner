//Rectangle pattern
//  row = 5 , col = 4

// * * * * 
// * * * * 
// * * * * 
// * * * * 
// * * * *

#include <iostream>
using namespace std;

int main(){
   
    int row;
    cout<<"Enter Number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter Number of columns: ";
    cin>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;     
}