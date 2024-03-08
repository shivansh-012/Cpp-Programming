/*
#include <iostream>
using namespace std;
bool pairSum(int A[],int n,int givenSum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((A[i]+A[j])==givenSum)
            {
                cout<<A[i]<<A[j];
                return true;
            }
            
        }
        for(int j=i+1;j<n;j++)
        {
            if((A[i]+A[j])==givenSum)
            {
                cout<<A[i]<<" "<<A[j]<<endl;;
                return true;
            }
        }
    }
    return false;
}
*/
#include <iostream>
using namespace std;
bool pairSum(int A[],int n,int givenSum)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(A[low]+A[high]==givenSum)
        {
            cout<<A[low]<<" "<<A[high]<<endl;
            return true;
        }
        else if(A[low]+A[high]<givenSum)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n],givenSum;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cin>>givenSum;
    cout<<pairSum(A,n,givenSum);
}