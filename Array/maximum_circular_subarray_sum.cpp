//Maximum subarray sum = Total sum of array - Sum of non-contributing elements
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int kadane(int A[],int n)
{
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentSum+=A[i];
        if(currentSum<0)
        {
            currentSum=0;
        }
        maxSum=max(currentSum,maxSum);
    }
    return maxSum;
}
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
    int wrapSum;
    int nonwrapSum=kadane(A,n);
    int totalSum=0;
    for(int i=0;i<n;i++)
    {
        totalSum+=A[i];
        A[i]=-A[i];
    }
    wrapSum = totalSum + kadane(A,n);
    cout<<max(wrapSum,nonwrapSum);
}
