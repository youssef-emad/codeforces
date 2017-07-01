#include <iostream>
#include <math.h>

using  namespace std ;

int gcd(int,int);
int main()
{
	int simon,anti,n,last_n;
	bool check = true;

	cin>>simon;
	cin>>anti;
	cin>>n;
	last_n = 0 ;
	while(n > 0)
	{
		n = n - gcd(simon,n) ;
		check = true ;
		if(n > 0)
		{
			n = n - gcd(anti,n) ;
			check = false ;
		}
	}
	cout<<!check<<endl;
	return 0;
}

int gcd(int a , int b)
{
	if (a > b)
	{
		int temp = a;
		a = b ;
		b = temp ;
	}
	if(b%a == 0)
	{
		return a ;
	}else
	{
		return gcd(a,b%a) ;
	}
}