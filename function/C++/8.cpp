// check Pythagorean Triplet

// x,y,z sides of Triange  and x is hypotenuse

// x*X == y*y + z*Z  (when x> y and z)

#include <iostream>

using namespace std;

bool check(int x , int y , int z)
{
    int a = max(x ,max(y,z)); // maximum of x , y , z
    int b,c;

    if(a==x)
    {
        b=y;
        c=z;
    }
    if(a==y)
    {
        b=x;
        c=z;
    }
    if(a==z)
    {
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c)
    {
        return true;
    }

        return false;

    
}

int main(){

    int x,y,z;
    cout<<"side of Triangle"<<endl;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet";
    }

     return 0;
}
