#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n,c=0;
	string st,st_old="";
	cin>>n;

	for (int i=0;i<n;i++)
	{
		cin>>st;
		if (st != st_old)
		{
			c++;
			st_old = st;
		}
	}
	cout<<c;
	return 0;
}