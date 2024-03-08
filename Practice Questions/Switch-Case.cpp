#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character";
    cin>>button;

    switch(button)
    {
        case 'a':
            cout<<"Hello";
            break;
        case 'b':
            cout<<"Namaste";
            break;     
        case 'c':
            cout<<"Salute";
            break;
        case 'd':
            cout<<"Hola";
            break; 
        case 'e':
            cout<<"Ciao";
            break;
        default:
            cout<<"i am still learning more";
    }
}