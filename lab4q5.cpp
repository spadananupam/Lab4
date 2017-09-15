#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);


int main()
{
    int num;

    cout<<"Enter any number: ";
    cin>>num;
    if(isPrime(num))
    {
        cout<<num<<" is a prime number .\n";
    }
    else
    {
        cout<<num<<" is not Prime number.\n";
    }
    if(isArmstrong(num))
    {
        cout<<num<<" is Armstrong number.\n";
    }
    else
    {
        cout<<num<<" is not Armstrong number.\n";
    }
    if(isPerfect(num))
    {
        cout<<num<<" is Perfect number.\n";
    }
    else
    {
        cout<<num<<" is not Perfect number.\n";
    }

    return 0;
}
int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int isArmstrong(int num)
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;

    originalNum = num;
    digits = (int) log10(num)+1;
    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }

    return (originalNum == sum);
}
int isPerfect(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;

    for(i=1; i<n; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
}













