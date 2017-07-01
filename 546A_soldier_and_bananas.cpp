#include<iostream>

using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int sum = 0;
	for (int i =1 ; i<=w;i++)
	{
		sum += k*i;
	}
	if (sum-n > 0)
		cout<<sum-n;
	else
		cout<<0;
	return 0;
}