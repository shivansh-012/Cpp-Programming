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
    int s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(s==sum)
            {
                for(int k=i;k<=j;k++)
                    cout<<arr[k]<<" ";
                cout<<endl;
                break;
            }
        }
    }
}