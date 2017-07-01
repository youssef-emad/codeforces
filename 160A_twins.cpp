#include <iostream>
#include <functional>  
#include <algorithm>

using  namespace std ;

int main()
{
	int n,in,sum = 0;
	int coins[100];
	cin>>n;
	for(int i = 0;i<n ; i++)
	{
		cin>>in;
		sum += in ;
		coins[i] = in ;
	}
	
	int req = sum/2,count = 0 ;
	std::sort(coins,coins+n,std::greater<int>());
	sum = 0;
	for(int i =0 ; i<n ; i++)
	{
		sum +=coins[i];
		if(sum > req)
		{
			count = i + 1 ;
			break ;			
		}
	}
	cout<<count<<endl;
	return 0;
}