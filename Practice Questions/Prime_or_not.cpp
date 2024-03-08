#include <iostream>
using namespace std;
int main()
/*{
    int n;
    cin>>n;

    int isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime no.";
            isprime=0;
            break;
        }
    }
    if(isprime==1)
        cout<<n<<" is a prime no.";
}
//prime no.s between a and b inclusive of them
*/
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
            cout<<i<<endl;
    }
}
