#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl<<"all possible subarrays:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<A[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}
