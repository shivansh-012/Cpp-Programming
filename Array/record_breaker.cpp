/*Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following conditions:

• The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.

• Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

Note that the very first day could be a record breaking day

Please help Isyana find out the number of record breaking days.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int max=INT_MIN;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>max)
                max=arr[j];
        }
        if(arr[i]>max && arr[i]>arr[i+1])
            cout<<arr[i]<<endl;
    }
}