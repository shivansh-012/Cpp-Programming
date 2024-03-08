// checking the no. is  armstrong or not

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n,a=n,count=0,sum=0;
    while(m>0)
    {
        count++;
        m/=10;
    }
    while(a>0)
    {
        int digit=a%10;
        int poweredDigit=1;
        for(int i=0;i<count;i++)
            poweredDigit*=digit;
        sum+=poweredDigit;
        a/=10;
    }
    if(sum==n)
        cout<<n<<" is an Armstrong number.";
    else
        cout<<n<<" is not an Armstrong number.";
}