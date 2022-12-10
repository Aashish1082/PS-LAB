#include<iostream>
using namespace std;
int factorial( int n, int fact )
{
	if ( n==1 || n==0 )
		return fact;
	else
		factorial( n-1, n*fact );
}

int main( ){
	int n,value;
	cout<<"Enter the number : " <<endl;
	cin>>n ;
	value = factorial( n,1 ); 
    cout<<"Factorial of"<<" " <<n<<" "<<"is"<<" "<<value;
	return 0;
}