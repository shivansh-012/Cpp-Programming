#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter size of rows and columns";
    cin>>m>>n;
    int A[m][n];
    cout<<"enter "<<m*n<<" elements"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}