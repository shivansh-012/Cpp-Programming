/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=2*n-2*i;space++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int space=1;space<=2*n-2*i;space++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
        cout<<endl;
    }

}