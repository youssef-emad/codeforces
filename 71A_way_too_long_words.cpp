#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	int n ;
	string inp[100],word ;
	cin>>n ;
	for (int i = 0 ;i<n ; i++)
	{
		cin>>word ;
		int ln = word.length() ;
		if(ln > 10)
		{
			inp[i] = word.substr(0,1)+to_string(ln - 2)+ word.substr(ln-1,1) ;
		}else
		{
			inp[i] = word ;
		}
	}

	for (int i = 0 ;i<n ; i++)
	{
		cout<<inp[i]<<endl ;
	}
	return 0 ;
}