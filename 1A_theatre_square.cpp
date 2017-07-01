#include <iostream>
#include <math.h>

using  namespace std ;

void main()
{
	double m,n,a ;
	cin>>m;
	cin>>n;
	cin>>a;
	unsigned long long e = ceil(n/a) *ceil(m/a) ;
	cout<<e<<endl ;
}