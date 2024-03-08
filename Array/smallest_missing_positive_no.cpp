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
    int smallestMissing=1;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]<=0)
            continue;
        else if (arr[i] == smallestMissing)
            smallestMissing++;
        else
        {   cout<<smallestMissing;
            break;
        }
    }
}