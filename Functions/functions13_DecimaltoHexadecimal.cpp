#include <bits/stdc++.h>
using namespace std;
string decimaltoHexadecimal(int n)
{
    int base=1;
    string sum="";
    while(base<=n)
        base*=16;
    base/=16;
    while(base>0)
    {
        int lastDigit = n/base;
        n-=lastDigit*base;
        base/=16;
        if(lastDigit<=9)
            sum = sum + to_string(lastDigit);
        else
        {
            char c = 'A' + lastDigit-10;
            sum.push_back(c);
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltoHexadecimal(n);
}