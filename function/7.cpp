//  Sum of  n Natural Number 

#include <iostream>
using namespace std;

int sum(int n)
{
    int t =0;
    for(int i=1;i<=n;i++)
    {
        t = t + i;
    }
    return t;
}

int main(){

    int n;
    cout<<"Sum of n Natural Number"<<endl;
    cout<<"n = ";
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}