#include <iostream>

using  namespace std ;

void main()
{
	int n,k,a[50],temp,count = 0;
	cin>>n;
	cin>>k;
	for (int i = 0; i<n ; i++)
	{
		cin>>temp ;
		a[i] =temp;
	}
	for (int i = 0; i<n ; i++)
	{
		if (a[i] >= a[k - 1] && a[i] > 0)
		{
			count++ ;
		}
	}
	cout<<count;
}