#include<bits/stdc++.h>
#define N 3
using namespace std;
void rotatematrix(int mat[100][N])
{
    for(int i=N-1;i>=0;i--)
    {
        for(int j=N-1;j>=0;j--)
        {
           cout<<mat[i][j]; 
        }
        cout<<endl;
    }
}
int main()
{
    int mat[N][N];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>mat[i][j];
        }
    }
    rotatematrix(mat);
    return 0;
}