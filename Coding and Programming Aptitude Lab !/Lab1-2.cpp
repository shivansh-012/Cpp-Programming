#include <bits/stdc++.h>
using namespace std;
bool checkprime(int n)
{
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (n <= 1)
            return 0;
        if (n % i == 0)
        {
            c++;
            if (c > 1)
                break;
        }
    }
    if (c > 1)
        return 0;
    else
        return 1;
}

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverseTheNo(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum *= 10;
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool checkArmstrong(int n)
{
    int length = log10(n) + 1;
    int m = n;
    int res = 0;
    while (m > 0)
    {
        int digit = m % 10;
        int power = 1;
        for (int i = 0; i < length; i++)
        {
            power *= digit;
        }
        res += power;
        m /= 10;
    }
    return n == res;
}

void fibonacci(int n)
{
    if (n == 1)
        cout << 0;
    else
    {
        int num1 = 0, num2 = 1;
        cout << num1 << " " << num2 << " ";
        while (n > 2)
        {
            int sum = num1 + num2;
            cout << sum << " ";
            num1 = num2;
            num2 = sum;
            n--;
        }
    }
}

int hcfOrgcd(int a, int b)
{
    // int minimum = (a < b) ? a : b;
    // for (int i = minimum; i >= 1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         return i;
    //     }
    // }
    // return 1;
    while(a!=0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    // int a = checkprime(n);
    // if(a==1)
    //     cout<<"Yes, n is prime";
    // else
    //     cout<<"Yes, n is not prime";

    // cout<<sumOfDigit(n);

    // cout<<reverseTheNo(n);

    // if (checkArmstrong(n))
    //     cout << "Yes, " << n << " is an Armstrong number." << endl;
    // else
    //     cout << "No, " << n << " is not an Armstrong number." << endl;

    // fibonacci(n);

    int n1;
    cin >> n1;
    cout << hcfOrgcd(n, n1);
}