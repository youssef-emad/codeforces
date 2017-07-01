#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	int n,r=0;
	char a ;
	cin>>n;
	char last_char;
	cin>>last_char ;

	for (int i = 0 ; i<n-1 ;i++)
	{
		cin>>a ;
		if (a == last_char)
		{
			r++;
		}
		last_char = a ;
	}
	cout<<r<<endl;
	return 0 ;
}