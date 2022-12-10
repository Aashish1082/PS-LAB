#include<iostream>
using namespace std;
int sum(int n)
{
      int s=0,rem;
    while(n!=0){
    s+=n%10;
    n=n/10;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<sum(n);
}