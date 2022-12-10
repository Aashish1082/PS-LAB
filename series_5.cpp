#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n)
{ 
    if(n==0 || n==1)
    return 1;
    return (n*factorial(n-1));
     }
int main()
{
    int n,x=1;double s=0;
    cout<<"Enter the number till you want sum"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+2){
        if(i%2==1)
        {
        s+=(pow(x,i))/factorial(i);
        }
        else
        s-=(pow(x,i))/factorial(i);
    }

    cout<<s;
}