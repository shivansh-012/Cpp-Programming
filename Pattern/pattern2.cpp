/*
****
*  *
*  *
*  *
****
*/

#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            if(i==1 || i==row || j==1 || j==column)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    } 
}
