// Addition of Two Number

#include <iostream>
using namespace std;

int addnum(int a , int b)
{
    return a + b;
}

int main(){

    int a;
    cout<<"Addition of Two numbers"<<endl;
    cout<<"First Number: ";
    cin>>a;

    int b;
    cout<<"Second Number: ";
    cin>>b;

    cout<<addnum(a,b)<<endl;


    return 0;
}