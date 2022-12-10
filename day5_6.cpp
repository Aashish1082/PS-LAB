#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int arr[6];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<6;i+=2)
    {
        swap(arr[i],arr[i++]);
    }
    
    cout<<"FINAL ARRAY IS"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
}
