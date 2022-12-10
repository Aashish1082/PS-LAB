#include <bits/stdc++.h>
using namespace std;
 
int kdigit(int a, int b, int k)
{
    int p = pow(a, b);
    int count = 0;
    while (p > 0 && count < k) {
 
        int rem = p % 10;
 
        
        count++;
 
        
        if (count == k)
            return rem;
 
        p = p / 10;
    }
 
    return 0;
}
 
int main()
{
    // int a , b , k ;
    // cout<<"Enter two numbers"<<endl;
    // cin>>a>>b;
    // cout<<"Kth digit"<<endl;
    // cin>>k;
    cout << kdigit(5,2,1);
    
    return 0;
}