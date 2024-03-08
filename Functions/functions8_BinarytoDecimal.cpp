#include <iostream>
using namespace std;
int binarytoDecimal(int n)
{
    int base=1,sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum+=base*rem;
        base*=2;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<binarytoDecimal(n);
}