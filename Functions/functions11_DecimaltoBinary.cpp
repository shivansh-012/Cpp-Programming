#include <iostream>
using namespace std;
int decimaltoBinary(int n)
{
    int base=1,sum=0;
    while(base<=n)
        base*=2;
    base/=2;
    while(base>0)
    {
        int lastDigit = n/base;
        n-=lastDigit*base;
        base/=2;
        sum = sum*10 + lastDigit;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltoBinary(n);
}