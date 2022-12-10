#include <bits/stdc++.h>
using namespace std;  
int search(int a[], int k, int x)
{
    int j;
     
    for ( j = k - 1; j > -1 ; j--)
    {
        if(a[j] == x)
            return j ;
    }
                 
        return -1 ;
}
void genArray(int arr[], int N)
{
    for(int i = 0; i < N - 1; i++)
    {
        if(search(arr, i, arr[i]) == -1)
                arr[i + 1] = 0 ;
 
        else
            arr[i + 1] = (i-search(arr, i, arr[i])) ;
    }
}
int main()
{
    int N = 5 ;
    int size = N + 1 ;
    int a[] = {0, 0, 0, 0, 0};
    genArray(a, N) ;
     
    for (int i = 0; i < N ; i ++)
        cout << a[i] << " " ;
        return 0;
}
 
 