#include<iostream>
using namespace std;
int factorial(int n)
{   
    int sum=0;
    if(n==0 || n==1)
    return 1;
    int fact=1;
    for(int i=1;i<n;i++)
    fact=fact*i;
    sum+=fact;
    return sum;

}
int num(int n)
{
    for(int i=1;i<=n;i++)
    return i;
}
int main()
{
    int n,i=1;
    cout<<"Enter the number till you want sum"<<endl;
    cin>>n;
    cout<<factorial(n)/num(n);