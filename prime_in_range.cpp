#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n)
{
    int flag=1;
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        flag==1;
        break;
    }
    return flag;
}
int main()
{
    int n,flag;
    cout<<"Enter the number you want to check"<<endl;
    cin>>n;
    flag=isprime(n);
    if(flag==0)
    cout<<"Number is prime"<<endl;
    else
    cout<<"Number is not prime";
}