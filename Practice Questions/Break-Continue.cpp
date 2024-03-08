#include <iostream>
using namespace std;
int main()
{
    int pocketMoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
            continue;
        if(pocketMoney==0)
            break;
        cout<<"Go out today i.e. date = "<<date<<endl;
        pocketMoney=pocketMoney-300;
    }
}
//Continue = skips to the next iteration of the loop
//Break = terminates the loop