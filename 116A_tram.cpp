#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	int n;
	int a = 0 ;
	int b = 0 ;
	int current = 0;
	int max = 0;
	cin>>n;
	for (int i = 0 ; i<n;i++)
	{
		cin>>b;
		cin>>a;
		current = current + a - b ;
		if(current > max)
		{
			max = current ;
		}
	}
	cout<<max ;
	return 0 ;
}