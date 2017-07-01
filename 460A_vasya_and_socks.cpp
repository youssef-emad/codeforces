#include<iostream>

using namespace std;

int main()
{
	int a,b,c = 0;
	cin>>a>>b;
	int sum = a;
	while(a != 0)
	{
		sum += a/b ;
		c += a%b;
		a = a/b;
		if (a == 0 && c >= b)
		{
			a =	c;
			c = 0;
		}
	}
	cout<<sum;
	return 0;
}