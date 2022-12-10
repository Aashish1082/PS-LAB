#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    char b[10];
    int n,m;
    int count=0;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the size"<<endl;
    cin>>m;
    cout<<"Enter the first string"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
    }
    for(int j=0;j<m;j++)
    {
        cin>>b;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            count++;
        }
        
        
    }
}