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
    int ele;
    cin>>ele;
    int r=0,c=n-1;
    int counter=0;
    while(r<m && c>=0)
    {
        if(ele==A[r][c])
        {
            counter=1;
            break;
        }
        else if(ele<A[r][c])
            c--;
        else
            r++;
    }   
    if(counter==1)
        cout<<"element found";
    else                
        cout<<"element not found";
}