#include <iostream>
#include <math.h>
using  namespace std ;

int main()
{
	int n;
	int num;
	int count;
	int taxi[4] = {0,0,0,0} ;
	cin>>n ;
	for (int i = 0 ; i<n ; i++)
	{
		cin>>num ;
		taxi[num -1]++ ;
	}
	if (taxi[0]>taxi[2])
	{
		float diff = (taxi[0] - taxi[2])/2.0 - taxi[1] ;
		if (diff != 0)
		{
			count = taxi[3] + taxi[2] + ceil((2 * taxi[1] + taxi[0] - taxi[2])/4.0) ;
		}else
		{
			count = taxi[3] + taxi[2] + taxi[1] ;				
		}
	} else
	{
		count = taxi[3] + taxi[2] + (taxi[1] + 1)*2/4;	
	}
	cout<<count ;
	return 0 ;
}