#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int ele)
{
    int start=0,end=n,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(ele==arr[mid])
        {
            return mid;        
        }
        else if(ele<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
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
    int ele;
    cout<<endl<<"enter element whose index is to b searched"<<endl;
    cin>>ele;
    cout<<"element found at index:"<<binarysearch(arr,n,ele);
}