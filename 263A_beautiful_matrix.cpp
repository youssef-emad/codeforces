#include <iostream>
#include <math.h>

using  namespace std ;

int main()
{
	int row,col;
	for (int i = 1 ;i<=5 ; i++)
	{
		for (int j =1 ; j<=5 ; j++)
		{
			int n;
			cin>>n ;
			if(n == 1)
			{
				row = i;
				col = j ;
				break;
			}
		}
	}
	cout<<abs(row - 3) + abs(col -3)<<endl;
	return 0;
}