//	A robot have five  buttons “a”,”b”,”c”,”d” and “e”.  
// All buttons says "hello" in different languages simultaneoulsy.
// using Switch Case

   // a=hello
   // b=namaste
   // c=salut
   // d=hola
   // e=ciao

#include <iostream>
using namespace std;

int main(){

    char button;
    cin>>button;

    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"salut"<<endl;
        break;

        case 'd':
        cout<<"Hola"<<endl;
        break;

        case 'e':
        cout<<"ciao"<<endl;
        break;

        default :
        cout<<"I am Still Learning More"<<endl;
        break;
    }

    return 0;
}