#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n,maxVal=INT_MIN;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        maxVal=max(maxVal,arr[i]);
    }
    cout<<maxVal;
}