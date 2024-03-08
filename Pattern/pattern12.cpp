/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
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
        for(int j=i;j>=1;j--)
            cout<<j<<" ";
        for(int j=2;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}