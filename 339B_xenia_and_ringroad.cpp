#include <iostream>

using namespace std;

int main()
{
	long long n,m,s=0,a;
	cin>>n>>m>>a;
	long long last = a ;
	s += a - 1;
	for (int i =0;i<m-1;i++)
	{
		cin>>a;
		if (a >= last)
			s += a -last;
		else if (a < last)
			s += n- (last - a);
		last = a;
	}
	cout<<s;
	return 0;
}