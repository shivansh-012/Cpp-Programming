#include <iostream>
using namespace std;
int firstrepeatingElement(int arr[],int n)
{
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] == arr[j]) 
                return arr[i];
        }
        for(int j=i+1;j<n;j++) 
        {
            if(arr[i] == arr[j]) 
                return arr[i];
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
    cout<<endl<<"repeating element= "<<firstrepeatingElement(arr,n);
}