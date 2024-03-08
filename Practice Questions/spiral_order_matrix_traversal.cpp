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
    // spiral order print
    int row_start=0,row_end=m-1,column_start=0,column_end=n-1;
    while(row_start<=row_end && column_start<=column_end)
    {
        //for row_start
        for(int col=column_start;col<=column_end;col++)
        {
            cout<<A[row_start][col]<<" ";
        }
        row_start++;
        //for column_end
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<A[row][column_end]<<" ";
        }
        column_end--;
        //for row_end
        for(int col=column_end;col>=column_start;col--)
        {
            cout<<A[row_end][col]<<" ";
        }
        row_end--;
        //for column_start
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<A[row][column_start]<<" ";
        }
        column_start++;
    }
}