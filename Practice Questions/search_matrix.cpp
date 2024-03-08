#include <iostream>
using namespace std;
string linearSearch(int A[][100],int m,int n,int ele)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==ele)
                return "element found";

        }
    }
    return "element not found";
}
int main()
{
    int m,n;
    cout<<"enter size of rows and columns";
    cin>>m>>n;
    int A[100][100];
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
    int ele;
    cin>>ele;
    cout<<linearSearch(A,m,n,ele);
}