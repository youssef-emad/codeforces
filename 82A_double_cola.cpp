#include <iostream>
#include <math.h>

using  namespace std ;

int main()
{
	int n,i=5,sum = 0,r;
	cin>>n;
	while(sum<n)
	{
		sum+=i ;
		i*= 2;
	}
	i = i/2;
	r= sum - i;
	n = n - r ;
	r = (sum - r)/5 ;
	n = ceil(n*1.0/r);
	
	switch(n)
	{
		case 1: cout<<"Sheldon"<<endl ;break;
		case 2: cout<<"Leonard"<<endl; break;
		case 3: cout<<"Penny"<<endl; break;
		case 4: cout<<"Rajesh"<<endl; break;
		case 5: cout<<"Howard"<<endl; break;
	}
	return 0;
}