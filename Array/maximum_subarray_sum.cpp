#include <iostream>
#include <climits>
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
    int max=INT_MIN;
    cout<<endl<<"all possible subarrays:"<<endl;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+A[j];
            if(sum>max)
            {
                max=sum;
            }
        }    
    }
    cout<<"maximum subarray sum:"<<max;
}