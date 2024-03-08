//printing prime no.s from a to b

#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
//to skip checking of 1
        if(i==1)
            continue;
        if(isPrime(i)==true)
            cout<<i<<endl;
    }
}