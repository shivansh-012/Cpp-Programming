#include <iostream>
using namespace std;
int decimaltoOctal(int n)
{
    int base=1,sum=0;
    while(base<=n)
        base*=8;
    base/=8;
    while(base>0)
    {
        int lastDigit = n/base;
        n-=lastDigit*base;
        base/=8;
        sum = sum*10 + lastDigit;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltoOctal(n);
}