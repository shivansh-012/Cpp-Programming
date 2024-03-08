#include <iostream>
using namespace std;
int main()
{
    int l,m,n;
    cout<<"enter size of rows and columns of both the matrices";
    cin>>l>>m>>n;
    int A[l][m],B[m][n];
    cout<<"enter "<<l*m<<" elements for 1st matrix"<<endl;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"enter "<<m*n<<" elements for 1st matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>B[i][j];
        }
    }
    //answer matrix initialisation by 0
    int ans[l][n];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
        }
    }
    //matrix multiplication
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                ans[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}