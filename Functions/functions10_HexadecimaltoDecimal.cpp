#include <iostream>
using namespace std;
int hexadecimaltoDecimal(string n)
{
    int base=1,sum=0;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
            sum+=base*(n[i]-'0');
        if(n[i]>='A' && n[i]<='F')
            sum+=base*(n[i]-'A'+10);
        base*=16;
    }
    
    return sum;
}
int main()
{
    string n;
    cin>>n;
    cout<<hexadecimaltoDecimal(n);
}
