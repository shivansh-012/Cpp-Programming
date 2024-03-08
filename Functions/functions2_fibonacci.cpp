#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
}
