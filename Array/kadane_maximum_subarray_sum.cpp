#include <iostream>
#include <climits>
#include <algorithm>
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
    cout<<endl;
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentSum+=A[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    cout<<maxSum;
}