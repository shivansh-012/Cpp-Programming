#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            return i;
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
    cout<<"element found at index:"<<linearsearch(arr,n,ele);
}