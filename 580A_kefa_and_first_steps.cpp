#include<iostream>

using namespace std;

int main()
{
	int n,a,b = 0,s=0,max=0;
	cin>>n;
	for (int i =0 ; i<n;i++)
	{
		cin>>a;
		if (a>=b)
		{
			s++;
		}
		else
		{
			if (s >= max)
				max = s;
			s=1;
		}
		b = a;
	}
	if (s >= max)
		max = s;
	cout<<max;
	return 0;
}