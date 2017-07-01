#include <iostream>

using  namespace std ;

int main()
{
	int n,in;
	cin>>n;
	int out[101] ;

	for (int i = 1 ; i<=n ;i++)
	{
		cin>>in;
		out[in] = i;
	}
	
	for(int i = 1 ; i<=n ;i++)
	{
		cout<<out[i]<<endl ;
	}
	return 0;
}