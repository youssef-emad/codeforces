#include <iostream>
#include <string>
#include <math.h>
using  namespace std ;

int main()
{
	int n;
	int count = 0 ;
	string inp;
	cin>>n;
	for (int i = 0 ; i<n;i++)
	{
		cin>>inp ;
		std::size_t found = inp.find("+");
		if (found!=std::string::npos)
		{
			count++;
		}else
		{
			count-- ;
		}
	}

	cout<<count ;
	return 0 ;
}