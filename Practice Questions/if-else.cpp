#include <iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    // if(savings>5000)
    //     cout<<"neha\n";
    //nested if-else
    if(savings>5000)
    {
        if(savings>10000)
            cout<<"Road Trip with Neha\n";
        else
            cout<<"Shopping with Neha\n"; 
    }
    else if(savings>2000)
        cout<<"rashmi\n";
    else
        cout<<"friends\n";
}
