#include <iostream>
#include <math.h>

using  namespace std ;

int main()
{
	int n , count = 0 ;
	cin>>n ;
	n++;
	int thousand = n/1000 ;
	int hundred = (n - thousand*1000)/100;
	int ten = (n - thousand*1000 - hundred*100)/10;
	int unit = n - thousand*1000 - hundred*100 - ten*10 ;

	while(thousand<10)
	{
		while(hundred < 10)
		{
			while(ten<10)
			{
				while(unit<10)
				{
					
					if(thousand != hundred && hundred != ten && ten != unit && ten !=thousand && hundred != unit && thousand!=unit)
					{
						goto exit;
					}
					unit++;
				}
				unit = 0 ;
				ten++;
			}
			ten = 0 ;
			hundred++;
		}
		hundred = 0 ;
		thousand ++;
	}
	exit:
	cout<<thousand<<hundred<<ten<<unit<<endl;
	return 0;
}