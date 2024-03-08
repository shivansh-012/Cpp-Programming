// write a function to add two integers

#include<iostream>
using namespace std;
void print(int num)
{
    cout<<num<<endl;
    return;
}
int add(int n1,int n2)
{
    print(n1);
    print(n2);
    int sum=n1+n2;
    return sum;
}
int main()
{
    int a=5;
    int b=6;
    cout<<add(a,b)<<endl;
}