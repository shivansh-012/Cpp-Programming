#include <iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"enter two no.s\n";
    cin>>n1>>n2;

    char op;
    cout<<"enter an operator\n";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"enter another operator";
    }
}
