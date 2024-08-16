#include <iostream>
using namespace std;
bool checkprime(int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(n<=1)
            return 0;
        if(n%i==0)
        {
            c++;
            if(c>1)
                break;
        }
    }
    if(c>1)
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    int a = checkprime(n);
    if(a==1)
        cout<<"Yes, n is prime";
    else
        cout<<"Yes, n is not prime";
}