#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	string a,b ;
	int r = 0;
	cin>>a;
	cin>>b;
	for (int i = 0 ; i<a.length() ; i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if (a[i]<b[i])
		{
			r = -1;
			break;
		} else if (a[i] > b[i])
		{
			r = 1 ;
			break;
		}
	}
	cout<<r<<endl ;
	return 0 ;
}