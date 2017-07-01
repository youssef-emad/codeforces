#include <iostream>

using  namespace std ;

bool is_composite(int n);

int main()
{
	int n,n1,n2;
	cin>>n;
	n1 = n ;
	n2 = 0 ;
	while(1)
	{
		n1--;
		if(is_composite(n1))
		{
			n2 =  n - n1 ;
			if(is_composite(n2))
			{
				break;
			}
		}
	}
	cout<<n1<<endl;

	cout<<n2<<endl;
	return 0;
}

bool is_composite(int n)
{
	for (int i = 2 ; i<n ; i++)
	{
		if(n%i == 0)
			return 1 ;
	}
	return 0;
}