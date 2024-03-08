#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of rows and columns";
    cin>>n;
    int A[n][n];
    cout<<"enter "<<n*n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //transposing
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=A[j][i];
            A[j][i]=A[i][j];
            A[i][j]=temp;
        }
    }
    cout<<"transpose of matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}