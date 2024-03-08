#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int ans=2;
    int pd=arr[0]-arr[1];
    int curr=2;
    for(int i=2;i<n;i++)
    {
        if(pd==(arr[i-1]-arr[i]))
            curr++;
        else
        {
            pd=arr[i-1]-arr[i];
            curr=2;
        }   
        ans=max(ans,curr);
    }
    cout<<ans;
}