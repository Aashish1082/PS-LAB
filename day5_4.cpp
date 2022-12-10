// Absolute Difference of 1: Given an array arr of size n. Print all the numbers less than k and should be such that the difference between every adjacent digit should be 1 in the array. Note: Return empty list if no such number present, driver code will automatically print -1. Input: First line contains two space separated numbers N and K, Number of elements in array and value of K and 2nd line contains space separated N elements as the elements of the array A. Output: Space separated numbers which satisfy the given condition. https://practice.geeksforgeeks.org/problems/absolute-difference-11156/1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int k,n;
    cout<<"Enter the size of array"<<endl;
    cin>>n; 
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if((arr[i]/10)-(arr[i]%10)==1 || (arr[i]/10)-(arr[i]%10)==-1 )
        cout<<arr[i];
        cout<<endl;
    }
}