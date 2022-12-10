#include<bits/stdc++.h>
using namespace std;
int maxDays(int arr[],int n)
{
        int max,i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr[0])
            {
                max=arr[i];
            }
        }
        return max;
}