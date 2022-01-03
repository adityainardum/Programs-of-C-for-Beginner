// Fibonacci series
// Sum of Previous Two Numbers

// 0,1,1,2,3,5,8,13,------

#include <iostream>
using namespace std;

void fib(int n)
{   
    int t1 = 0;   // t1 = first term 
    int t2 = 1;   // t2 = second term
    int nextterm;
    
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return ;
}

int main(){

    int n;
    cout<<"Number of Fibonacci terms: ";
    cin>>n;

    fib(n);

    return 0;
}